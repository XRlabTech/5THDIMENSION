using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestionLaunch : MonoBehaviour
{
  
    private GameObject Question;

    public void launch()
    {
        Question = GameObject.FindGameObjectWithTag("QuestionPanel");

        if (!Question.activeSelf)
        {
            Question.SetActive(true);
        }
    }
}
