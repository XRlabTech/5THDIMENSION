using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Game : MonoBehaviour
{
    [SerializeField]
    private string WEB_URL = "";

    void Start()
    {
     //   StartCoroutine(RestClient.Instance.Get(WEB_URL, GetPlayers));
    }

    void GetPlayers(PlayerList playerList )
    {
        foreach (Player player in playerList.players)
        {
            Debug.Log("Player ID : " + player.id);
            Debug.Log("Player ID : " + player.id);
            Debug.Log("Player ID : " + player.id);
        }
    }
}
