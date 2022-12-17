using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace RandomStepCount
{
    public class RabbitChaseController : MonoBehaviour
    {
        //3 minute count down
        private const float countDown = 180f;

        private float timer;

        [SerializeField]
        private TextMeshProUGUI countDownTimer;

        [SerializeField]
        private TextMeshProUGUI messageBoard;

        private bool isPlaying;

        private void OnEnable()
        {
            timer = countDown;
            try{
            StartCoroutine(StartGame());
            }catch(Exception exc){
                Debug.Log("Error Starting Coroutine startgame");
            }
        }

        private void Update()
        {
            if(isPlaying)
            {
                timer -= Time.deltaTime;
     
                float minutes = Mathf.FloorToInt(timer / 60);
                float seconds = Mathf.FloorToInt(timer % 60);

                countDownTimer.text = string.Format("{0:00}:{1:00}", minutes, seconds);

                if (timer <= 0)
                {
                    GameComplete();
                    isPlaying = false;
                    timer = 0;
                }
            }
        }

        private IEnumerator StartGame()
        {
            messageBoard.text = "Lets Play";

            yield return new WaitForSeconds(3);
try{
            StartCoroutine(MessageNote("Catch The Bunny"));
     }catch(Exception exc){
                Debug.Log("Error Starting Coroutine messagenote catch the bunny");
            }
            yield return new WaitForSeconds(4);

            isPlaying = true;

            WelcomeInstruction();
        }

        private void WelcomeInstruction()
        {
            messageBoard.text = "Tap to Catch Bunny";
        }


        private IEnumerator MessageNote(String message)
        {
            messageBoard.text = message;

            yield return new WaitForSeconds(4);

            messageBoard.text = "";
        }


        private void GameComplete()
        {
            timer = countDown;
            messageBoard.text = "Game Complete";
        }


        private void OnDisable()
        {
        
        }
    }
}
