using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WayPointFollow : MonoBehaviour
{
    [SerializeField]
    private GameObject[] waypoints;

    private int currentWP = 0;

    //If you increase speed also increase rotation
    [SerializeField]
    private float speed = 1.0f;
    [SerializeField]
    private float accuracy = 1.0f;
    [SerializeField]
    private float rotSpeed = 0.5f;

    private void Start()
    {
        waypoints = GameObject.FindGameObjectsWithTag("waypoint");
    }

    private void LateUpdate()
    {
        if (waypoints.Length == 0) return;

        Vector3 lookAtGoal = new Vector3(waypoints[currentWP].transform.position.x,
                                         this.transform.position.y,
                                         waypoints[currentWP].transform.position.z);

        Vector3 direction = lookAtGoal - this.transform.position;
        this.transform.rotation = Quaternion.Slerp(this.transform.rotation, Quaternion.LookRotation(direction), Time.deltaTime * rotSpeed);
            
        if(direction.magnitude < accuracy)
        {
            currentWP++;
            if(currentWP >= waypoints.Length)
            {
                currentWP = 0;
            }
        }
        this.transform.Translate(0,0,speed*Time.deltaTime);
    }
}
