using UnityEngine;

public class PinchScale : MonoBehaviour
{
    public float scaleFactor = 0.01f;

    private Vector3[] initialScales;
    private float initialDistance;
    private float initialScaleFactor;

    private void Start()
    {
        // Store the initial scales of all child objects
        initialScales = new Vector3[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
        {
            initialScales[i] = transform.GetChild(i).localScale;
        }
    }

    private void Update()
    {
        // Check if there are two touches on the device
        if (Input.touchCount == 2)
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            // If either touch began this frame, store the initial distance and scale factor
            if (touchZero.phase == TouchPhase.Began || touchOne.phase == TouchPhase.Began)
            {
                initialDistance = Vector2.Distance(touchZero.position, touchOne.position);
                initialScaleFactor = scaleFactor;
            }

            // Calculate the current distance between the touches
            float currentDistance = Vector2.Distance(touchZero.position, touchOne.position);

            // Calculate the pinch scale factor based on the initial and current distances
            scaleFactor = initialScaleFactor * (currentDistance / initialDistance);
        }

        // Apply the scale factor to all child objects
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform child = transform.GetChild(i);
            child.localScale = Vector3.Scale(initialScales[i], new Vector3(scaleFactor, scaleFactor, scaleFactor));
        }
    }
}
