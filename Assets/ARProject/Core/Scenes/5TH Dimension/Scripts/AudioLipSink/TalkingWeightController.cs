using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TalkingWeightController : MonoBehaviour
{
    [Header("References")]
    [SerializeField] 
    private Animator animator;
    
    [SerializeField] 
    private AudioSource voiceHandler;

    [Header("Values")]
    [SerializeField] private float updateStep = 0.1f;
    [SerializeField] private int sampleDataLength = 128;

    //Weight Variables
    private float currentWeight = 0f;

    //Audio Variables
    private float currentUpdateTime = 0f;
    private float[] clipSampleData;
    private float clipLoudness;

    private bool isTalking;

    private void Awake()
    {
        clipSampleData = new float[sampleDataLength];
    }

    private void Update()
    {
        //Runs a timer to check the amplitude
        currentUpdateTime += Time.deltaTime;
        if (currentUpdateTime >= updateStep)
        {

            if (voiceHandler.clip == null)
            {
                return;
            }
            currentUpdateTime = 0f;
            voiceHandler.clip.GetData(clipSampleData, voiceHandler.timeSamples);
            clipLoudness = 0f;

            foreach (var sample in clipSampleData)
            {
                clipLoudness += Mathf.Abs(sample);
            }
            clipLoudness /= sampleDataLength;
        }

        if (clipSampleData[0] == 0)
        {
            clipLoudness = 0f;
        }

        //Changes weight depending on if the loudness is higher than 0
        if (clipLoudness > 0f)
        {
            currentWeight += Time.deltaTime;

            if (currentWeight >= 1)
            {
                currentWeight = 1f;
            }
            animator.SetLayerWeight(1, currentWeight);
        }
        else if (clipLoudness <= 1f)
        { 
            currentWeight -= Time.deltaTime;

            if (currentWeight <= 0)
            {
                currentWeight = 0f;
            }
            animator.SetLayerWeight(1, currentWeight);
        }
    }
}
