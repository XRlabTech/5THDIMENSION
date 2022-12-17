using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.Events;
using UnityEngine;
using TMPro;
using System;
using System.IO;
using Newtonsoft.Json;
public class QuestionController : MonoBehaviour
{
    [SerializeField]
    private AllQuestionsConfig Questions;

    [SerializeField]
    private TMP_Text QuestionText;
     [SerializeField]
    private TMP_Text ErrorText;
   [SerializeField]
    private TMP_Text AnswerA;

    [SerializeField]
    private TMP_Text AnswerB;

      [SerializeField]
    private GameObject Home;
    [SerializeField]
    private GameObject IsCorrect;
    
    [SerializeField]
    private GameObject IsWrong;
    public SavedQuestion data;
    private FileStream file;
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
    private GameObject PowerUpPanel;

    [SerializeField]
    private GameObject VoucherPanel;
    [SerializeField]
    private Image PowerUpImage;
    [SerializeField]
    private Image PowerUpImage2;
    [SerializeField]
    private RawImage VoucherImage;
        private void Start()
        {     
            try{
                Home.SetActive( false);
                LoadData();

            }catch(Exception exc){
                Debug.Log("Error on load: "+exc.ToString());
            }
            //if(Questions.currentMarkerID == "");
                //Questions.currentMarkerID = "1";
            foreach (var question in Questions.questionItem)
            {
                if(question.Year == DateTime.Now.Year){
                    if(question.Month == DateTime.Now.Month)
                        if(question.Day == DateTime.Now.Day)
                            if(question.MarkerId.ToString() == Questions.currentMarkerID &&  (question.QuestionAnswered == false ||question.QuestionAnswered == null))
                            {
                                QuestionText.text = question.Question;
                                if(question.AnswerAText != "" )
                                AnswerA.text = question.AnswerAText;
                                if(question.AnswerBText != "" )
                                AnswerB.text = question.AnswerBText;
                                return;
                            }
                }else if(question.Day ==0||question.Month==0||question.Year == 0){
                    if(question.MarkerId.ToString() == Questions.currentMarkerID && (question.QuestionAnswered == false ||question.QuestionAnswered == null) )
                        {
                            QuestionText.text = question.Question;
                            if(question.AnswerAText != "" && question.AnswerAText !=null)
                            AnswerA.text = question.AnswerAText;
                            if(question.AnswerBText != "" && question.AnswerBText !=null)
                            AnswerB.text = question.AnswerBText;
                            return;
                        }
                }
                
            }
            GameObject.Find("QuestionPanel").SetActive(false);
                Home.SetActive( true);
                IsWrong.SetActive(false);
               // IsWrong.SetActive(false);

        }

        public void CheckAnswer(bool value)
        { 
            bool answer = value;

            foreach (var question in Questions.questionItem)
            {
                if (question.MarkerId.ToString() == Questions.currentMarkerID && question.QuestionAnswered == false)
                {
                    if(question.Answer==answer)
                    {
                        StartCoroutine(submitDataToVoucherAPI());
                        IsCorrect.SetActive(true);
                        question.QuestionAnswered = true;
                        StartCoroutine(SaveData());
                    }
                    else
                    {
                        getPowerUpSprite(RandomPowerUp(),PowerUpImage2);
                        question.QuestionAnswered = true;
                        StartCoroutine(SaveData());

                        IsWrong.SetActive(true);
                    }
                }
            }
        }

        IEnumerator DownloadImage(string MediaUrl)
        {   
            
            UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
            yield return request.SendWebRequest();
            if(request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError) 
                Debug.Log(request.error);
            else{
          //  RawImage AdPanel = GameObject.Find("AdPanel").GetComponent<RawImage>();
                VoucherImage.texture = ((DownloadHandlerTexture) request.downloadHandler).texture;
            }
        } 
    public void getPowerUpAfterVoucher()
    {
        VoucherPanel.SetActive(false);
        getPowerUpSprite(RandomPowerUp(), PowerUpImage);
        PowerUpPanel.SetActive(true);

    }
    IEnumerator submitDataToVoucherAPI()
        {   
           // yield return new WaitForSeconds(1);
            
        
            //  string IP = NetworkManager.singleton.networkAddress;
            string APIURL= "https://pwa.afblakemore.net//gamesupport/voucher.php?token=rMYQEaX8MqmB3FDk8JgX";
            //  APIURL+="&lat="+Input.location.lastData.latitude;
            //  APIURL+="&long="+Input.location.lastData.longitude;
            //  APIURL+="&ip="+Input.location.lastData.longitude.ToString();
            //  APIURL+="&age="+age.ToString();
            APIURL+= "&name=''";
            APIURL+= "&mobile="+ PlayerPrefs.GetString("MobileNumber");;
            APIURL+= "&campaign="+ Questions.currentMarkerID.ToString();

            // Debug.Log(APIURL);
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
                        if(AdData.vouchersent ){
                            StartCoroutine( DownloadImage(AdData.voucherurl));
                            VoucherPanel.SetActive(true);
                        }else{
                            
                            getPowerUpSprite(RandomPowerUp(),PowerUpImage);
                            VoucherPanel.SetActive(false);
                            PowerUpPanel.SetActive(true);
                        }
                        ErrorText.text=AdData.error;
                        Debug.Log("Voucher Sent: "+AdData.vouchersent .ToString()+" Voucher Error: "+ AdData.error + " Voucher URL: "+AdData.voucherurl);
                        //webView.BackgroundColor = Color.clear;
                        //webView.SetOpenLinksInExternalBrowser(true);
                        //webView.Show();
                        // StartCoroutine(DownloadImage(AdData.url));

                    }
                }
        } 
    

        public void ReturnToFind()
        {
            // LoaderUtility.Initialize();
            
            StartCoroutine(SaveData());
            LoaderUtility.Deinitialize();
            SceneManager.LoadScene(0);
        }

        public IEnumerator SaveData () 
        {
            try{
            //file.Close ();
            }catch(Exception exc){
               // Debug.Log("Error on save file close: "+exc.ToString());

            }
            yield return new WaitForSeconds(1);

            try{

          //  Debug.Log(GetPath());

        
            StreamWriter writer = new StreamWriter(GetPath(), false);
            string jsonData = JsonUtility.ToJson(Questions);
            
            writer.Write(jsonData);
         //   Debug.Log(jsonData);

            writer.Close ();
            writer.Dispose();
            }catch(Exception exc){
                Debug.Log("Error on save file : "+exc.ToString());

            }
        }

        static string GetPath()
        {
            return Path.Combine(Application.persistentDataPath,   "Data.json");
        }            
        public void LoadData()
        {
            try{
            file.Close ();
            }catch(Exception exc){
            //    Debug.Log("Error on load file close: "+exc.ToString());

            }
           // Debug.Log(GetPath());
        //{
            try{
                    if(File.Exists (GetPath()))
                    {
                        StreamReader reader = new StreamReader(GetPath());

                        //data = new QuestionItems();
                        data = JsonConvert.DeserializeObject<SavedQuestion>(reader.ReadToEnd());
                        reader.Close ();
                        reader.Dispose();
                        foreach (var savedquestion in data.questionItem)
                        {
                            //Debug.Log(savedquestion.Question );

                            foreach (var question in Questions.questionItem)
                            {

                                if(question.Question == savedquestion.Question){
                             //   Debug.Log("saved Question: "+savedquestion.Question + " vs Question: "+question.Question);

                                question.QuestionAnswered = savedquestion.QuestionAnswered;
                            // Debug.Log(question.Question +": Saved");
                                }
                            }
                        }
                            
            
                    }
                }catch(Exception exc){
                Debug.Log("Error on load file close: "+exc.ToString());

            }
        }
    
        public class QuestionItem
        {
            public int MarkerId { get; set; }
            public int Day { get; set; }
            public int Month { get; set; }
            public int Year { get; set; }
            public string Question { get; set; }
            public bool Answer { get; set; }
            public bool QuestionAnswered { get; set; }
            public string AnswerAText { get; set; }
            public string AnswerBText { get; set; }
            public string QuestionAnswerUrl { get; set; }
        }

        public class SavedQuestion
        {
            public string currentMarkerID { get; set; }
            public List<QuestionItem> questionItem { get; set; }
        }
        private int RandomPowerUp(){
            int RandomNumberForPowerup = UnityEngine.Random.Range(1, 11);
            int powerUpEarned = 0;
            if(RandomNumberForPowerup >=1 && RandomNumberForPowerup <= 3){
                powerUpEarned = 1;
            }else if(RandomNumberForPowerup >=4 && RandomNumberForPowerup <= 6){
                powerUpEarned = 2;
            }else if(RandomNumberForPowerup >=7 && RandomNumberForPowerup <= 9){
                powerUpEarned = 3;
            }else if(RandomNumberForPowerup ==10){
                powerUpEarned = 4;
            }else if(RandomNumberForPowerup ==11){
                powerUpEarned = 5;
            }
            return powerUpEarned;
        }
        private Sprite getPowerUpSprite(int powerUp, Image varPowerUpImage){
            Sprite ReturnSprite = null;
            int Power = 0;
            switch(powerUp){
                case 1:
                    ReturnSprite = powerUp1Sprite;
                    Power =  PlayerPrefs.GetInt("Power1", 0);
                    PlayerPrefs.SetInt("Power1", Power +1);
                    varPowerUpImage.sprite = powerUp1Sprite;

                break;
                case 2:
                    ReturnSprite = powerUp2Sprite;
                    Power =  PlayerPrefs.GetInt("Power2", 0);
                    PlayerPrefs.SetInt("Power2", Power +1);
                    varPowerUpImage.sprite = powerUp2Sprite;

                break;
                case 3:
                    ReturnSprite = powerUp3Sprite;
                    Power =  PlayerPrefs.GetInt("Power3", 0);
                    PlayerPrefs.SetInt("Power3", Power +1);
                    varPowerUpImage.sprite = powerUp3Sprite;

                break;
                case 4:
                    ReturnSprite = powerUp4Sprite;
                    Power =  PlayerPrefs.GetInt("Power4", 0);
                    PlayerPrefs.SetInt("Power4", Power +1);
                    varPowerUpImage.sprite = powerUp4Sprite;

                break;
                case 5:
                    ReturnSprite = powerUp5Sprite;
                    Power =  PlayerPrefs.GetInt("Power5", 0);
                    PlayerPrefs.SetInt("Power5", Power +1);
                    varPowerUpImage.sprite = powerUp5Sprite;

                break;
            }
            PlayerPrefs.Save();
            return ReturnSprite;
        }
        public class APIInfomation
        {
            public bool vouchersent { get; set; }
            public string voucherurl { get; set; }
            public string error { get; set; }
            public string name { get; set; }
            public string mobile { get; set; }
        }
		public enum MarkerType
		{
			Deer = 0,
			Chicken = 1,
            Fox = 2,
            Horse = 3,
            Sheep = 4,
            Pig= 6,
            Rabbit = 7
        }
 

}
