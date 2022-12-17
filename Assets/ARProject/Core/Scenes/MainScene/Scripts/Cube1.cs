using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube1 : MonoBehaviour, IModuleInteractable
{
    public void Gazed()
    {
        GetComponent<Renderer>().material.color = new Color(30, 50, 70);
        //UIController.ShowUI("Video");
    }

    public void Touched()
    {
        throw new System.NotImplementedException();
    }

    private void OnMouseUpAsButton()
    {


    }
}

