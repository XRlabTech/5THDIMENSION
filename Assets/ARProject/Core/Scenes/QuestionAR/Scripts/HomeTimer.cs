using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeTimer : MonoBehaviour
{
   
    void OnEnable()
    {
       // StartCoroutine(GotoScanMode());
    }


    private IEnumerator GotoScanMode()
    {
        yield return new WaitForSeconds(5);

        SceneManager.LoadScene(0);
    }
}
