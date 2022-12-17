using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RotaryHeart.Lib.SerializableDictionary;
using DG.Tweening;

using UnityEngine.UI;

using System;

[System.Serializable]
public class UIPanelDictionary : SerializableDictionaryBase<string, CanvasGroup> { }

public class UIController : Singleton<UIController>
{
    public static UIController instance;
    [SerializeField] UIPanelDictionary uiPanels;
    [SerializeField]
	public Sprite powerUp1Sprite;
    [SerializeField]
	public Sprite powerUp2Sprite;
    [SerializeField]
	public Sprite powerUp3Sprite;
    [SerializeField]
	public Sprite powerUp4Sprite;
    [SerializeField]
	public Sprite powerUp5Sprite;
    [SerializeField]
    public GameObject PowerUpPanel;
    [SerializeField]
    public GameObject losePanel;
    [SerializeField]
    private Image PowerUpImage;
    CanvasGroup currentPanel;

    void Awake()
    {
        base.Awake();
        Screen.orientation = ScreenOrientation.AutoRotation;
        Screen.autorotateToLandscapeLeft = false;
        Screen.autorotateToLandscapeRight = false;
        Screen.autorotateToPortrait = true;
        Screen.autorotateToPortraitUpsideDown = true;
        ResetAllUI();
  instance = GetComponent<UIController>();

    }

    public static void ShowUI(string name)
    {
        try{
        Instance?._ShowUI(name);

        }catch(Exception exc){

            Debug.Log("Error on show UI"+exc.ToString());
        }
        //Debug.Log(name + (Instance != null));
    }

    void _ShowUI(string name)
    {
        try{

        CanvasGroup panel;
        if (uiPanels.TryGetValue(name, out panel))
        {
            ChangeUI(uiPanels[name]);
        }
        else
        {
            Debug.LogError("Undefined ui panel " + name);
        }
        
        }catch(Exception exc){

            Debug.Log("Error on show UI"+exc.ToString());
        }
    }

    void ResetAllUI()
    {
        foreach (CanvasGroup panel in uiPanels.Values)
        {
            panel.gameObject.SetActive(false);
        }
    }

    void ChangeUI(CanvasGroup panel)
    {
        if (panel == currentPanel)
            return;
        if (currentPanel)
            FadeOut(currentPanel);
            //currentPanel.gameObject.SetActive(false);
        currentPanel = panel;
        if (panel)
            FadeIn(panel);
        //panel.gameObject.SetActive(true);
    }

    void FadeIn(CanvasGroup panel)
    {
        panel.gameObject.SetActive(true);
        panel.DOFade(1f, 0.5f);
    }
    void FadeOut(CanvasGroup panel)
    {
        panel.DOFade(0f, 0.5f).OnComplete(() => panel.gameObject.SetActive(false));
    }

}

