using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.XR.ARFoundation;
using Newtonsoft.Json;
using TMPro;
public class AppManager : MonoBehaviour
{
    public static AppManager instance;
    [SerializeField]
    private Button BunnyGame;

    [SerializeField]
    private Button GridGame;

    [SerializeField]
    private Button HamburgerMenu;

    [SerializeField]
    private TextMeshProUGUI messageBoard;
    [SerializeField]
    private GameObject AgeCheck;
    private UniWebView webView;
    public float gpsLong;
    public float gpsLat;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSplashScreen)]

    public void Awake()
    {
        UniWebView.SetAllowAutoPlay(true);
        Debug.Log("Before splash loaded");
        StartCoroutine(StartLocationServices());

    }

    private void Start()
    {
        StartCoroutine(StartLocationServices());

        instance = GetComponent<AppManager>();
        webView = FindObjectOfType<UniWebView>();
        webView.SetBackButtonEnabled(false);
        webView.Hide();
        messageBoard.enabled = false;
        BunnyGame.onClick.AddListener(LoadQuestionGame);
        GridGame.onClick.AddListener(LoadGridGame);
        HamburgerMenu.onClick.AddListener(showAgePanel);
        StartCoroutine(checkKillSwitch());
        if (PlayerPrefs.GetString("DateOfBirth") == null || PlayerPrefs.GetString("DateOfBirth") == "")
        {
            AgeCheck.SetActive(true);

        }
        else
        {
            AgeCheck.SetActive(false);

        }
        StartCoroutine(getAdvertDataFromAPI());
        StartCoroutine(appStartupCall());

    }
    private void showAgePanel()
    {
        AgeCheck.SetActive(true);
    }
    public void RerunAdvertLoad()
    {
        StartCoroutine(getAdvertDataFromAPI());
    }
    IEnumerator StartLocationServices()
    {
        #if UNITY_EDITOR
                // No permission handling needed in Editor
        #elif UNITY_ANDROID
                if (!UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.FineLocation)) {
                    UnityEngine.Android.Permission.RequestUserPermission(UnityEngine.Android.Permission.FineLocation);
                }

                // First, check if user has location service enabled
                if (!UnityEngine.Input.location.isEnabledByUser) {
                    // TODO Failure
                    Debug.LogFormat("Android and Location not enabled");
                    yield break;
                }

        #elif UNITY_IOS
          /*      if (!UnityEngine.Input.location.isEnabledByUser) {
                    // TODO Failure
                    Debug.LogFormat("IOS and Location not enabled");
                    yield break;
                }*/
        #endif

        // Starts the location service.
        Input.location.Start(1, 0.1f);

        // Waits until the location service initializes
        int maxWait = 20;
        while ((Input.location.status == LocationServiceStatus.Initializing) && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            Debug.Log("Timed out");
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.Log("Unable to determine device location");
            yield break;
        }
        else
        {
            gpsLong = Input.location.lastData.longitude;
            gpsLat = Input.location.lastData.latitude;
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            Debug.Log(Input.location.status + " Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
        }
        // Stops the location service if there is no need to query location updates continuously.
        // Input.location.Stop();
    }
    IEnumerator getAdvertDataFromAPI()
    {
        yield return new WaitForSeconds(1);

        DateTime dateofbirth = DateTime.Parse(PlayerPrefs.GetString("DateOfBirth"));
        int now = 0, dob = 0;
        try
        {
            now = int.Parse(DateTime.Now.ToString("yyyyMMdd"));

            dob = int.Parse(dateofbirth.ToString("yyyyMMdd"));
        }
        catch (FormatException exc)
        {
            Debug.Log(dateofbirth.ToString() + " Date not in correct format " + exc.ToString());
        }

        //  webView.scalesPageToFit = true;


        int age = (now - dob) / 10000;
        //  string IP = NetworkManager.singleton.networkAddress;
        string APIURL = "https://pwa.afblakemore.net//gamesupport/sponsorship.php?token=rMYQEaX8MqmB3FDk8JgX";
        APIURL += "&lat=" + Input.location.lastData.latitude;
        APIURL += "&long=" + Input.location.lastData.longitude;
        //  APIURL+="&ip="+Input.location.lastData.longitude.ToString();
        APIURL += "&age=" + age.ToString();
        Debug.Log(APIURL);
        webView.SetBackButtonEnabled(false);

        using (UnityWebRequest request = UnityWebRequest.Get(APIURL))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log(request.error);
            }
            else
            {
                string response = request.downloadHandler.text;
                //Debug.Log(response);

                APIInfomation AdData = JsonConvert.DeserializeObject<APIInfomation>(response);
                // Debug.Log(AdData.url);
                if (AdData.actionurl != "")
                {
                    webView.LoadHTMLString("<meta name=\"viewport\" content=\"width=device-width, shrink-to-fit=YES\"> <body style=\" background-image: url('" + AdData.url + "') ; background-size: cover; '   href='" + AdData.actionurl + "\"/>", "https://pwa.afblakemore.net");

                }
                else
                {
                    webView.LoadHTMLString("<meta name=\"viewport\" content=\"width=device-width, shrink-to-fit=YES\"> <body style=\" background-image: url('" + AdData.url + "') ; background-size: cover; '   href='" + AdData.actionurl + "\"/>", "https://pwa.afblakemore.net");

                }
                webView.BackgroundColor = Color.clear;
                webView.SetOpenLinksInExternalBrowser(true);
                webView.Show();
                // StartCoroutine(DownloadImage(AdData.url));

            }
        }
    }

    IEnumerator checkKillSwitch()
    {
        using (UnityWebRequest request = UnityWebRequest.Get("https://pwa.afblakemore.net//gamesupport/master.php?token=rMYQEaX8MqmB3FDk8JgX"))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log(request.error);
                // GameObject.Find("GameOver").SetActive(true);
                messageBoard.enabled = true;
                GameObject.Find("Find").SetActive(false);
                GameObject.Find("EasterEgg").SetActive(false);
                webView.Hide();
            }
            else
            {
                string response = request.downloadHandler.text;
                //Debug.Log(response);
                //CDW 01/02/2022 LOVE THIS BAND!!!
                KillSwitchEngaged KillSwitchEngage = JsonConvert.DeserializeObject<KillSwitchEngaged>(response);
                // Debug.Log(AdData.url);
                if (KillSwitchEngage.end == true)
                {
                    messageBoard.enabled = false;
                    GameObject.Find("Find").SetActive(true);
                    GameObject.Find("EasterEgg").SetActive(true);
                    webView.Show();
                }
                else
                {
                    messageBoard.enabled = true;
                    GameObject.Find("Find").SetActive(false);
                    GameObject.Find("EasterEgg").SetActive(false);
                    webView.Hide();
                }

                // StartCoroutine(DownloadImage(AdData.url));

            }
        }
    }
    IEnumerator appStartupCall()
    {
        int intAction = 1;
        int age = 0;
        if (PlayerPrefs.HasKey("DateOfBirth"))
        {
            intAction = 2;
            DateTime dateofbirth = DateTime.Parse(PlayerPrefs.GetString("DateOfBirth"));
            int now = 0, dob = 0;
            try
            {
                now = int.Parse(DateTime.Now.ToString("yyyyMMdd"));
                dob = int.Parse(dateofbirth.ToString("yyyyMMdd"));
            }
            catch (FormatException exc)
            {
                Debug.Log(dateofbirth.ToString() + " Date not in correct format " + exc.ToString());
            }
            age = (now - dob) / 10000;
        }
        string  APIURL = "https://pwa.afblakemore.net/gamesupport/unique.php?token=rMYQEaX8MqmB3FDk8JgX";
                APIURL += "&lat=" + Input.location.lastData.latitude;
                APIURL += "&long=" + Input.location.lastData.longitude;
                APIURL += "&action=" + intAction.ToString();
                APIURL += "&age=" + age.ToString();
        using (UnityWebRequest request = UnityWebRequest.Get(APIURL))
        {
            yield return request.SendWebRequest();
        }
    }

    IEnumerator DownloadImage(string MediaUrl)
    {

        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            Debug.Log(request.error);
        else
        {
            RawImage AdPanel = GameObject.Find("AdPanel").GetComponent<RawImage>();
            AdPanel.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }
    }
    private void OpenURL(string URL)
    {

        Application.OpenURL(URL);

        //LoaderUtility.Deinitialize();
    }

    private void LoadQuestionGame()
    {
        LoaderUtility.Deinitialize();
        SceneManager.LoadScene(3);
        LoaderUtility.Initialize();

        //LoaderUtility.Deinitialize();
    }

    private void LoadGridGame()
    {
        LoaderUtility.Deinitialize();

        SceneManager.LoadScene(1);

    }

    public class KillSwitchEngaged
    {
        public bool end { get; set; }
    }

    public class APIInfomation
    {
        public string url { get; set; }
        public string actionurl { get; set; }
    }

}
