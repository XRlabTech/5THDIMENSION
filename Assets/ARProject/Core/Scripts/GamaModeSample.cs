using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

using UnityEngine.SceneManagement;


public class GameModeSample : MonoBehaviour
{
    //30 second count down
    private const float countDown = 30f;

    private float timer;

    private int catchCount;

    [SerializeField]
    private TextMeshProUGUI countDownTimer;

    [SerializeField]
    private TextMeshProUGUI messageBoard;

    [SerializeField]
    private TextMeshProUGUI catchMessage;

    [SerializeField]
    private GameObject ResultUI;

     private GameObject Root;

    private bool isPlaying;

    public GameObject ResultUI1 { get => ResultUI; set => ResultUI = value; }

    public void OnEnable()
    {
        UIController.ShowUI("Main");

        TouchRabbit.OnRabbitTouched += RabbitTouches;

        timer = countDown;
    }

    public void Start()
    {
        catchCount = 0;
        catchMessage.text = catchCount.ToString() + " of 4";
        Root = GameObject.Find("Root");
    }

    public void RabbitTouches()
    {
        catchCount++;
        catchMessage.text = catchCount.ToString() + " of 4";
        if(catchCount >= 4)
        {
            isPlaying = false;
            timer = 0;
            GameComplete();
        }
    }

    private void Update()
    {
        if (isPlaying)
        {
            timer -= Time.deltaTime;

            float minutes = Mathf.FloorToInt(timer / 60);
            float seconds = Mathf.FloorToInt(timer % 60);

            countDownTimer.text = string.Format("{0:00}:{1:00}", minutes, seconds);

            if (timer <= 0)
            {
                isPlaying = false;
                timer = 0;
                GameComplete();
           
            }
        }
    }

    public void StartPlaying()
    {
        try{
         //   UIController.ShowUI("Main");
       // StartCoroutine(MessageNote("Catch the Bunny"));

                
        }catch(Exception exc){

            Debug.Log("Error on start playing"+exc.ToString());
        }

        isPlaying = true;
    }

    private IEnumerator MessageNote(String message)
    {
        messageBoard.text = message;

        yield return new WaitForSeconds(5);

        messageBoard.text = "";
    }

    public void returnHome()
    {
       
        StopAllCoroutines();
        SceneManager.LoadScene(0);
        LoaderUtility.Deinitialize();
         
       
    }
    private IEnumerator goHome()
    {
       

        yield return new WaitForSeconds(5);
        StopAllCoroutines();
         // Destroy(Root);
        SceneManager.LoadScene(0);
        LoaderUtility.Deinitialize();
         
       
    }
    private void GameComplete()
    {
     

        timer = countDown;
        countDownTimer.text = "";

        if(!ResultUI.activeSelf)
        {
            ResultUI.SetActive(true);
        }
   
      
        // WaitForSeconds(5);
         
      //  StartCoroutine(goHome());
    }


    private void OnDisable()
    {
        TouchRabbit.OnRabbitTouched -= RabbitTouches;
    }

    public void PlayAgain()
    {
        catchCount = 0;

        StartPlaying();
    }
}
