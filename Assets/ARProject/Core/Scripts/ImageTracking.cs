using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;

[RequireComponent(typeof (ARTrackedImageManager))]
public class ImageTracking: MonoBehaviour {
  [SerializeField]
  private GameObject[] placeablePrefabs;

  [SerializeField]
  private Button Home;

  [SerializeField]
  private AllQuestionsConfig Questions;

  [SerializeField]
  private int QuestionSceneID = 4;

  private Dictionary < string, GameObject > spawnedPrefabs = new Dictionary < string, GameObject > ();

  private string[] trackedName = new string[] {
    "Deer",
    "Chicken",
    "Cow",
    "Horse",
    "Sheep",
    "Pig"
  };

  public ARTrackedImageManager trackedImageManager;

  private string currentActiveQR;
  private GameObject Root;
  [SerializeField]
  private TextMeshProUGUI CurrentImage;

  [SerializeField]
  private TextMeshProUGUI IsTracking;

  private void Awake() {
    trackedImageManager = FindObjectOfType < ARTrackedImageManager > ();

    Root = GameObject.Find("Root");
     Debug.Log("Awake");
    foreach(GameObject prefab in placeablePrefabs) {
      GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
      newPrefab.name = prefab.name;
      spawnedPrefabs.Add(prefab.name, newPrefab);
      if (newPrefab.GetComponent < LookAtCamera > () == null) {
        newPrefab.AddComponent < LookAtCamera > ();

      }
      newPrefab.SetActive(false);
      newPrefab.transform.parent = Root.transform;

    }
  }

  private void Start() {

    Home.onClick.AddListener(GoHome);
  }

  private void OnEnable() {
    trackedImageManager.trackedImagesChanged += ImageChanged;
  }

  private void OnDisable() {
    trackedImageManager.trackedImagesChanged -= ImageChanged;
  }

  private void ImageChanged(ARTrackedImagesChangedEventArgs eventArgs) {

    foreach(ARTrackedImage trackedImage in eventArgs.added) {
      UpdateImage(trackedImage);
      CurrentImage.text = "Active Image: " + currentActiveQR + "/n Tracking Mode: " + trackedImage.trackingState;

    }

    foreach(ARTrackedImage trackedImage in eventArgs.updated) {
      if (trackedImage.trackingState == UnityEngine.XR.ARSubsystems.TrackingState.Tracking) {

        currentActiveQR = trackedImage.referenceImage.name;

        UpdateImage(trackedImage);
      } else if (trackedImage.trackingState == UnityEngine.XR.ARSubsystems.TrackingState.Limited) {

        UpdateLimitedGameObject(trackedImage);
      } else {
        if (currentActiveQR != trackedImage.referenceImage.name) {
          spawnedPrefabs[trackedImage.name].SetActive(false);
        }
        //                currentActiveQR = null;
        /*
        if (currentActiveQR != trackedImage.referenceImage.name)
        {
            ReAssignGameObject(trackedImage.referenceImage.name, trackedImage);
        }
        */
        //RemoveGameObjects();
      }
      CurrentImage.text = "Active Image: " + currentActiveQR + "/n Tracking Mode: " + trackedImage.trackingState;

    }

    foreach(ARTrackedImage trackedImage in eventArgs.removed) {
      CurrentImage.text = "Active Image: " + currentActiveQR + "/n Tracking Mode: " + trackedImage.trackingState;

      RemoveGameObjects();

      // Destroy(trackedImage.transform.Find(trackedImage.referenceImage.name).gameObject);
    }
  }

  private void UpdateLimitedGameObject(ARTrackedImage trackedImage) {

    foreach(GameObject go in spawnedPrefabs.Values) {
      if (spawnedPrefabs.TryGetValue(trackedImage.referenceImage.name, out GameObject prefab)) {
        try {
          if (!prefab.GetComponent < ARTrackedImage > ().destroyOnRemoval) {

            prefab.transform.position = trackedImage.transform.position;
            prefab.transform.rotation = Quaternion.Euler(new Vector3(-40, -180, transform.rotation.z));
            prefab.SetActive(true);
            if (prefab.GetComponent < LookAtCamera > () == null) {
              prefab.AddComponent < LookAtCamera > ();

            }

          } else {
            prefab.SetActive(false);
          }
        } catch (Exception exc) {
        //  Debug.Log("Error on get component");
        }
      }
    }

  }

  private void ReAssignGameObject(string name, ARTrackedImage trackedImage) {
    if (spawnedPrefabs.Values != null) {
      GameObject prefab = spawnedPrefabs[name];
      Vector3 position = trackedImage.transform.position;
      prefab.SetActive(true);
      prefab.transform.position = position;
      prefab.transform.rotation = Quaternion.Euler(new Vector3(-40, -180, transform.rotation.z));

      foreach(GameObject go in spawnedPrefabs.Values) {
        if (go.name == name) {
          go.SetActive(false);
        }
      }
    }
  }

  private void RemoveGameObjects() {
    foreach(GameObject go in spawnedPrefabs.Values) {
      go.SetActive(false);
    }
  }

  private void UpdateImage(ARTrackedImage trackedImage) {
    IsTracking.text = GameObject.Find("AR Camera").transform.position.ToString();

    if (spawnedPrefabs.Values != null) {
      string name = trackedImage.referenceImage.name;
      Vector3 position = trackedImage.transform.position;

      GameObject prefab = spawnedPrefabs[name];
      prefab.transform.position = position;
      prefab.transform.rotation = Quaternion.Euler(new Vector3(-40, -180, transform.rotation.z));

      prefab.SetActive(true);
      if (prefab.GetComponent < LookAtCamera > () == null) {
        prefab.AddComponent < LookAtCamera > ();

      }

      foreach(GameObject go in spawnedPrefabs.Values) {
        if (go.name != name) {
          go.SetActive(false);
        } else if (name == trackedName[0] || name == trackedName[1] || name == trackedName[2] ||
          name == trackedName[3] || name == trackedName[4] || name == trackedName[5]) {
          StartCoroutine(launchQuestion(name));
        } else if (name == "Rabbit") {
          ChaseRabbit();
        }
      }
    }
  }

  IEnumerator launchQuestion(string name) {
     string trackitem = name;
        Questions.currentMarkerID = trackitem;
        yield return new WaitForSeconds(6.0f);

    Destroy(Root);
    
    SceneManager.LoadScene(4);
    LoaderUtility.Deinitialize();

  }

  public void ChaseRabbit() {
    
    Destroy(Root);
   
     LoaderUtility.Deinitialize();
    SceneManager.LoadScene(2);
    LoaderUtility.Initialize();

  }

  public void GoHome() {
    Destroy(Root);
    SceneManager.LoadScene(0);
    LoaderUtility.Deinitialize();
  }
}