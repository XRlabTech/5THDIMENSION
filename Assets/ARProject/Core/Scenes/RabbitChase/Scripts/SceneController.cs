using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

using UnityEngine.XR.ARFoundation;
public class SceneController : MonoBehaviour
{
    [SerializeField]
    private Button Home;

    private void Start()
    {
        Home.onClick.AddListener(ReturnHome);
    }

    private void ReturnHome()
    {
        StopAllCoroutines();
        
             LoaderUtility.Deinitialize();
        SceneManager.LoadScene(0);
    }
}
