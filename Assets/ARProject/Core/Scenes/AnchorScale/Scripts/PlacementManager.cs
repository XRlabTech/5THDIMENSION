using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlacementManager : MonoBehaviour
{
    public ARRaycastManager raycastManager;
    [SerializeField]
    private GameObject PointObj;

    void Start()
    {
        raycastManager = FindObjectOfType<ARRaycastManager>();
        PointObj = this.transform.GetChild(0).gameObject;
        PointObj.SetActive(false);  
    }

    void Update()
    {
        List<ARRaycastHit> hitpoint = new List<ARRaycastHit>();
        raycastManager.Raycast(new Vector2(Screen.width / 2, Screen.height / 2), hitpoint, TrackableType.Planes);
        if(hitpoint.Count > 0)
        {
            transform.position = hitpoint[0].pose.position;
            transform.rotation = hitpoint[0].pose.rotation;

            if (!PointObj.activeInHierarchy)
            {
                PointObj.SetActive(true);  
            }
        }
    }
}
