using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

[System.Serializable]
public class RestClient : MonoBehaviour
{
    private static RestClient _instance;

    public static RestClient Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<RestClient>();

                if (_instance == null)
                {
                    GameObject go = new GameObject();
                    go.name = typeof(RestClient).Name;
                    _instance = go.AddComponent<RestClient>();
                    DontDestroyOnLoad(go);  
                }
            }
            return _instance;
        }
    }

    public IEnumerable Get(string url, System.Action<PlayerList> callBack)
    {
        using(UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if(www.isNetworkError)
            {
                Debug.LogError(www.error);      
            }
            else
            {
                if(www.isDone)
                {
                    string jsonResult = System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);

                    PlayerList playerList = JsonUtility.FromJson<PlayerList>(jsonResult); 

                    callBack(playerList);   

                    Debug.Log(jsonResult);      
                }
            }
        }
    }

    public IEnumerable Delete(string url, int id)
    {
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError)
            {
                Debug.LogError(www.error);
            }
            else
            {
                if (www.isDone)
                {
                    string jsonResult = System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);

                    PlayerList playerList = JsonUtility.FromJson<PlayerList>(jsonResult);

                    //callBack(playerList);

                    Debug.Log(jsonResult);
                }
            }
        }
    }




}