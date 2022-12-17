using UnityEngine.EventSystems;
using UnityEngine;
using System;
using System.Collections;
using UnityEngine.Events;

using UnityEngine.SceneManagement;

public class TouchRabbit : MonoBehaviour
{
    public delegate void RabbitTouchedEvent();
    public static event RabbitTouchedEvent OnRabbitTouched;

    [SerializeField]
    private GameObject Rabbit;

    private bool isTouched;

    private void OnMouseUpAsButton()
    {
          if (Rabbit.activeSelf ){
        OnRabbitTouched();
        isTouched = true;
        }

    }


    private void Update()
    {
        if (Rabbit.activeSelf && isTouched)
        {
            Rabbit.SetActive(false);
            StartCoroutine(Deactivate());
        }
    }


    IEnumerator Deactivate()
    {
        yield return new WaitForSeconds(3);
        isTouched = false;
        Rabbit.SetActive(true);
    }
}