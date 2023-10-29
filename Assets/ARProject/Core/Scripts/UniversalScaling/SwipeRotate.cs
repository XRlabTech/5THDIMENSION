using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipeRotate : MonoBehaviour
{
    // Variables to store the touch points
    private Vector2 touchZero;
    private Vector2 touchOne;

    void Update()
    {
        // Check if there is a single touch on the device
        if (Input.touchCount == 1)
        {
            // Store the touch
            Touch touch = Input.GetTouch(0);

            // If the touch began this frame
            if (touch.phase == TouchPhase.Began)
            {
                // Store the initial touch position
                touchZero = touch.position;
            }
            // If the touch ended this frame
            else if (touch.phase == TouchPhase.Ended)
            {
                // Store the final touch position
                touchOne = touch.position;

                // Calculate the swipe distance
                Vector2 swipeDistance = touchOne - touchZero;

                // If the swipe distance is greater than the minimum required
                if (swipeDistance.magnitude > 50)
                {
                    // Calculate the swipe angle
                    float swipeAngle = Mathf.Atan2(swipeDistance.y, swipeDistance.x) * Mathf.Rad2Deg;

                    // If the swipe angle is within the left or right range, rotate the object accordingly
                    if (swipeAngle < 0)
                    {
                        transform.Rotate(Vector3.forward, 90);
                    }
                    else if (swipeAngle > 0)
                    {
                        transform.Rotate(Vector3.forward, -90);
                    }
                }
            }
        }
    }
}
