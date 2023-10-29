using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;

public class ThirdPersonMove : MonoBehaviour
{
    public FixedJoystick controller;
    private ThirdPersonUserControl thirdPersonUserControl;
    public Button jump;

    void Start()
    {
        thirdPersonUserControl = GetComponent<ThirdPersonUserControl>();
    }
   


    void Update()
    {
        thirdPersonUserControl.h = controller.input.x;
        thirdPersonUserControl.v = controller.input.y;
    }


    public void OnButtonPressed()
    {
        thirdPersonUserControl.m_Jump = true;
    }


}
