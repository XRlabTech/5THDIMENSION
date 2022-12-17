using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;
using System.Text.RegularExpressions;
using System.Globalization;
public class BirthDateFormat : MonoBehaviour {
 
    public TMP_InputField DateOfBirthInput;
    public TMP_InputField MobileInput;
    public TMP_Text ErrorMessage;
        [SerializeField]
    public GameObject ErrorPanel;
 
    int prevLength;
 
    void Start () {
        DateOfBirthInput.onValueChanged.AddListener (OnValueChanged);
          if(PlayerPrefs.HasKey("DateOfBirth"))
        {
           DateOfBirthInput.text = PlayerPrefs.GetString("DateOfBirth");
        }
                  if(PlayerPrefs.HasKey("MobileNumber"))
        {
           MobileInput.text = PlayerPrefs.GetString("MobileNumber");
        }
    }
  public const string motif = @"^\(?([0-9]{3})\)?[-. ]?([0-9]{3})[-. ]?([0-9]{4})$";
 
  public static bool IsPhoneNbr(string number)
  {
     if (number != null) return Regex.IsMatch(number, motif);
     else return false;
  }
    public void OnValueChanged (string str) {
        print ("String:" + str);
        if (str.Length > 0) {
            DateOfBirthInput.onValueChanged.RemoveAllListeners ();
            if (!char.IsDigit (str[str.Length - 1]) && str[str.Length - 1] != '/') { // Remove Letters
                DateOfBirthInput.text = str.Remove (str.Length - 1);
                DateOfBirthInput.caretPosition = DateOfBirthInput.text.Length;
            } else if (str.Length == 2 || str.Length == 5) {
                if (str.Length < prevLength) { // Delete
                    DateOfBirthInput.text = str.Remove (str.Length - 1);
                    DateOfBirthInput.caretPosition = DateOfBirthInput.text.Length;
                } else { // Add
                    DateOfBirthInput.text = str + "/";
                    DateOfBirthInput.caretPosition = DateOfBirthInput.text.Length;
                }
            }
            DateOfBirthInput.onValueChanged.AddListener (OnValueChanged);
        }
        prevLength = DateOfBirthInput.text.Length;
    }
       IEnumerator appStartupCall()
    {
        int intAction = 1;
        int age = 0;

           // intAction = 2;
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

    public void SaveDOB(){
        string errorDetail = "";
        System.Globalization.CultureInfo c = new System.Globalization.CultureInfo("en-GB");

        if(MobileInput.text.Length >=9 && MobileInput.text.Length <=11){
        if(DateTime.TryParseExact(DateOfBirthInput.text, 
                       "dd/MM/yyyy", 
                       CultureInfo.InvariantCulture, 
                       DateTimeStyles.None, 
                    out DateTime dateTime)){

                int now=0, dob=0;
        try
        {
             now = int.Parse(DateTime.Now.ToString("yyyyMMdd"));

             dob = int.Parse(dateTime.ToString("yyyyMMdd"));
        } catch(FormatException exc)
        {
            Debug.Log(DateOfBirthInput.text+ " Date not in correct format "+exc.ToString());
        }
          
     
        int age = (now - dob) / 10000;
        if(age >=18){
                    if (!PlayerPrefs.HasKey("DateOfBirth"))
        {
       PlayerPrefs.SetString("DateOfBirth", DateTime.Parse(DateOfBirthInput.text).ToString("dd/MM/yyyy"));
        PlayerPrefs.Save();
 StartCoroutine(appStartupCall());
        }else{
       PlayerPrefs.SetString("DateOfBirth", DateTime.Parse(DateOfBirthInput.text).ToString("dd/MM/yyyy"));
        PlayerPrefs.Save();
        }
        PlayerPrefs.SetString("MobileNumber", MobileInput.text);

        PlayerPrefs.Save();
        GameObject.Find("AgeCheck").SetActive(false);
            ErrorPanel.SetActive(false);

        }else{
            ErrorPanel.SetActive(true);
            errorDetail += "Sorry but you must be 18 or over to play this game. "+Environment.NewLine;
        }
 
        }
        else{
            ErrorPanel.SetActive(true);
                errorDetail+= "Invalid Date Of Birth. "+Environment.NewLine;

        }
        }else{
            ErrorPanel.SetActive(true);

               errorDetail+= "Invalid Phone Number. "+Environment.NewLine;
        }
        ErrorMessage.text = errorDetail;
        AppManager.instance.RerunAdvertLoad();
    }
}