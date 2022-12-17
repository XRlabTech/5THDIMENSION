using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonClickers : MonoBehaviour , IPointerDownHandler
{
    public delegate void DanceAnim(string dance); //defines the delegate

    public static event DanceAnim onDance; //instance of the delegate


    [SerializeField]
    private int danceint;

    private string[] StringArray = new string[] {"Dance1", "Dance2", "Dance3"};

  
    public void OnPointerDown(PointerEventData eventData)
    {
        if(onDance != null)
        {
            onDance(StringArray[danceint]);
        }
    }


}
