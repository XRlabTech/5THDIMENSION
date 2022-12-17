using UnityEngine.EventSystems;
using UnityEngine;
using System;
using System.Collections;

public class QuestionTouch : MonoBehaviour
{
    [SerializeField]
    private GameObject QuestionCanvas;

    private void OnMouseUpAsButton()
    {
        OnTapped();
    }

    public void OnTapped()
    {
              


    }
}