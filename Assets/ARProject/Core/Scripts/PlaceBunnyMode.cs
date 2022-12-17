using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class PlaceBunnyMode : MonoBehaviour
{
    [SerializeField] ARRaycastManager raycaster;
 
    GameObject placedPrefab;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private int tabCount;

    void OnEnable()
    {
        tabCount = 0;
        UIController.ShowUI("PlaceObject");
    }


    public void SetPlacedPrefab(GameObject prefab)
    {
        placedPrefab = prefab;
    }

    public void OnPlaceObject(InputValue value)
    {
        Vector2 touchPosition = value.Get<Vector2>();
        //Debug.Log("OnPlaceObject " + touchPosition);
        PlaceObject(touchPosition);
    }

    void PlaceObject(Vector2 touchPosition)
    {
        if (raycaster.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            Pose hitPose = hits[0].pose;

            if (tabCount<=0)
            {
                Instantiate(placedPrefab, hitPose.position, hitPose.rotation);

                tabCount++;

                InteractionController.EnableMode("Main");
            }
            
        }
    }

}
