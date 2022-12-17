using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Rendering;

public class LookAtCamera : MonoBehaviour
{
    
 public GameObject FirstPersonCamera;
    // Start is called before the first frame update
    void Start()
    {
      //  FirstPersonCamera = GameObject.Find("AR Camera");
    }


    void Update() {
        
        Vector3 dir = GameObject.Find("AR Camera").transform.position - transform.position;
        dir.y = 0; // keep the direction strictly horizontal
        Quaternion rot = Quaternion.LookRotation(dir);
    // Debug.Log("Direction: "+dir);
     //Debug.Log("Rotation: "+rot);

        // slerp to the desired rotation over time
        transform.rotation = Quaternion.Slerp(transform.rotation, rot, 2f * Time.deltaTime);
    }
}
