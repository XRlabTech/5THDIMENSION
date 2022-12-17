using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ImageLoader : MonoBehaviour
{
    public IEnumerator LoadImage(string path, Action<Texture2D> onComplete)
    {
        WWW www = new WWW(path);

        Texture2D texture = new Texture2D(1,1);

        yield return www;

        www.LoadImageIntoTexture(texture);

        onComplete(texture);    
    }
}
