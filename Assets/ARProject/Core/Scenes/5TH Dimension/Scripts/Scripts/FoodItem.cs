using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Effects;

public class FoodItem : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    private void OnTriggerEnter(Collider collision)
    {
        string[] tagToFind = new string[] { "ground", "robot", "gameObjects", "walls", "doors" };

        for (int i = 0; i < tagToFind.Length; i++)
        {
            var testedTag = tagToFind[i];
            //compareTag() is more efficient than comparing a string
            if (!collision.CompareTag(testedTag)) continue; //return early pattern, if not the good tag, stop there and check the others

            Debug.Log($"hit {testedTag}"); //improve your debug informations

            //Update score

            
            return; //if the tag is found, no need to continue looping
        }
    }
}
