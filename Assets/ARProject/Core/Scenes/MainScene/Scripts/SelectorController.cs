using InfallibleCode.Completed;
using System.Collections;
using System.Collections.Generic;
using TriLibCore.Interfaces;
using UnityEngine;

public class SelectorController : MonoBehaviour
{
    [SerializeField]
    private GameObject clickMouse;

    void Update()
    {

        var nearestGameObject = GetNearestGameObject();
        if (nearestGameObject == null) return;
        RaycastHit hit;
    
        var ray = Camera.main.ScreenPointToRay(new Vector3(Screen.width / 2, Screen.height / 2, 0));

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.rigidbody != null)
            {
                var interactable = nearestGameObject.GetComponent<IModuleInteractable>();
                if (interactable != null) return;
                interactable?.Gazed();

                clickMouse.transform.position = hit.point;
                clickMouse.transform.rotation = Quaternion.identity;    
            }
        }
    }

    private GameObject GetNearestGameObject()
    {
        GameObject result = null;
        var ray = Camera.main.ScreenPointToRay(new Vector3(Screen.width / 2, Screen.height / 2, 0));
        if (Physics.Raycast(ray, out var hit, 3))
        {
            result = hit.transform.gameObject;
        }
        return result;
    }
}
