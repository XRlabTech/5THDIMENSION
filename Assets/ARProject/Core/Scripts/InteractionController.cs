
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RotaryHeart.Lib.SerializableDictionary;

[System.Serializable]
public class InteractionModeDictionary : SerializableDictionaryBase<string, GameObject> { }

public class InteractionController : Singleton<InteractionController>
{
    [SerializeField] InteractionModeDictionary interactionModes;

    GameObject currentMode;

    protected override void Awake()
    {
        base.Awake();
        ResetAllModes();
    }

    void Start()
    {
        _EnableMode("Startup");
    }

    public static void EnableMode(string name)
    {
        Instance?._EnableMode(name);
    }

    void _EnableMode(string name)
    {
        GameObject modeObject;
        if (interactionModes.TryGetValue(name, out modeObject))
        {
            try{
                if(!modeObject.activeSelf){
                    Debug.Log("Non Active GameObject Enable Mode: "+name);
                    modeObject.SetActive(true);
                    StartCoroutine(ChangeMode(modeObject));


                }else{
                    Debug.Log("Active GameObject Enable Mode: "+name);
                    modeObject.SetActive(true);

                    StartCoroutine(ChangeMode(modeObject));

                }
                 }catch(Exception exc){
                Debug.Log("Error Starting Coroutine ChangeMode name: "+name);
            }
        }
        else
        {
            Debug.LogError("undefined mode named " + name);
        }
    }

    void ResetAllModes()
    {
        foreach (GameObject mode in interactionModes.Values)
        {
            mode.SetActive(false);
        }
    }

    IEnumerator ChangeMode(GameObject mode)
    {

        if (mode == currentMode)
            yield break;

        if (currentMode)
        {
            currentMode.SetActive(false);
            yield return null;
        }

        currentMode = mode;
        mode.SetActive(true);
        
    }

}
