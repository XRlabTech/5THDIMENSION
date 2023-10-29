using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UniversalScaler : MonoBehaviour
{
    public float scaleSpeed = 0.005f;

    private Vector2 touch1StartPos;
    private Vector2 touch2StartPos;
    private float touch1StartMag;
    private float touch2StartMag;
    private float startScale;

    void Update()
    {
        if (Input.touchCount == 2)
        {
            Touch touch1 = Input.GetTouch(0);
            Touch touch2 = Input.GetTouch(1);

            if (touch1.phase == TouchPhase.Began || touch2.phase == TouchPhase.Began)
            {
                touch1StartPos = touch1.position;
                touch2StartPos = touch2.position;
                touch1StartMag = (touch1StartPos - touch2StartPos).magnitude;
                touch2StartMag = (touch1StartPos - touch2StartPos).magnitude;
                startScale = transform.localScale.x;
            }
            else if (touch1.phase == TouchPhase.Moved || touch2.phase == TouchPhase.Moved)
            {
                Vector2 touch1EndPos = touch1.position;
                Vector2 touch2EndPos = touch2.position;
                float touch1EndMag = (touch1EndPos - touch2EndPos).magnitude;
                float touch2EndMag = (touch1EndPos - touch2EndPos).magnitude;

                float scaleFactor = (touch1EndMag / touch1StartMag + touch2EndMag / touch2StartMag) / 2f;

                transform.localScale = new Vector3(startScale * scaleFactor, startScale * scaleFactor, startScale * scaleFactor);
            }
        }
    }
}
