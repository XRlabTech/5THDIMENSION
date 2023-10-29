using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationController : MonoBehaviour
{
    [SerializeField]
    private Animator animator;


    private void OnEnable()
    {
        ButtonClickers.onDance += Letsdance;
    }


    private void Letsdance(string dance)
    {
        animator.SetTrigger(dance.ToString());
    }



    private void OnDisable()
    {
        ButtonClickers.onDance -= Letsdance;
    }

}
