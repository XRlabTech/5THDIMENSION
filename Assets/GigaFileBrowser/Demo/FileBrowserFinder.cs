using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using TriLibCore.General;
using TriLibCore.Mappers;
using TriLibCore;
using TriLibCore.Samples;
#if UNITY_EDITOR
using UnityEditor;
#endif


namespace GigaFileBrowser.Demo
{
    public class FileBrowserFinder : MonoBehaviour
    {
        #region REFERENCES

        [SerializeField]
        Text outputLable = null;

        [SerializeField]
        Button chooseFileButton = null;

        [SerializeField]
        Color color = Color.red;

        [SerializeField]
        RectTransform parentPanel = null;

        [SerializeField]
        List<string> extensionsFilter = null;

        [SerializeField]
        private string targetPath = "C:/Users/Tony/Desktop/ARprojects/ARSandbox/Assets/StreamingAssets";

        #endregion

        #region UNITY EVENTS

        void Awake()
        { 
            chooseFileButton.onClick.AddListener(OnChooseFile);
        }

        #endregion

        #region UI EVENTS

        void OnChooseFile()
        {
            FileBrowser.ChooseFile(
                onChoose: OnChooseFile,
                onCancel: OnCancel,
                onError: OnError,
                parent: parentPanel,
                color: color,
                extensionsFilter: extensionsFilter);
        }

        #endregion

        #region CALLBACKS

        private void OnChooseFile(string path)
        {
            targetPath = GetStreamingAssetsPath();
            outputLable.color = Color.white;
            outputLable.text = $"FILE\n{path}";
            Debug.Log(targetPath.ToString());
          

            var assetLoaderOptions = AssetLoader.CreateDefaultLoaderOptions();
            assetLoaderOptions.ExternalDataMapper = ScriptableObject.CreateInstance<ExternalDataMapperSample>();
            assetLoaderOptions.TextureMapper = ScriptableObject.CreateInstance<TextureMapperSample>();
            AssetLoader.LoadModelFromStream(File.OpenRead(path), path, null, OnLoad, OnMaterialsLoad, OnProgress, OnError, null, assetLoaderOptions);

        }


        void OnError(string error)
        {
            outputLable.color = Color.red;
            outputLable.text = $"ERROR\n{error}";
        }

        void OnCancel()
        {
            outputLable.color = Color.white;
            outputLable.text = "CANCELED";
        }


        private string GetStreamingAssetsPath()
        {
            string path;
            #if UNITY_EDITOR
                path = "file:" + Application.dataPath + "/StreamingAssets";
            #elif UNITY_ANDROID
                path = "jar:file://"+ Application.dataPath + "!/assets/";
            #elif UNITY_IOS
                path = "file:" + Application.dataPath + "/Raw";
            #else
                //Desktop (Mac OS or Windows)
                path = "file:"+ Application.dataPath + "/StreamingAssets";
            #endif

            return path;
        }

        #endregion


        /// <summary>
        /// Called when any error occurs.
        /// </summary>
        /// <param name="obj">The contextualized error, containing the original exception and the context passed to the method where the error was thrown.</param>
        private void OnError(IContextualizedError obj)
        {
            Debug.LogError($"An error occurred while loading your Model: {obj.GetInnerException()}");
        }

        /// <summary>
        /// Called when the Model loading progress changes.
        /// </summary>
        /// <param name="assetLoaderContext">The context used to load the Model.</param>
        /// <param name="progress">The loading progress.</param>
        private void OnProgress(AssetLoaderContext assetLoaderContext, float progress)
        {
            Debug.Log($"Loading Model. Progress: {progress:P}");
        }

        /// <summary>
        /// Called when the Model (including Textures and Materials) has been fully loaded.
        /// </summary>
        /// <remarks>The loaded GameObject is available on the assetLoaderContext.RootGameObject field.</remarks>
        /// <param name="assetLoaderContext">The context used to load the Model.</param>
        private void OnMaterialsLoad(AssetLoaderContext assetLoaderContext)
        {
            Debug.Log("Materials loaded. Model fully loaded.");
        }

        /// <summary>
        /// Called when the Model Meshes and hierarchy are loaded.
        /// </summary>
        /// <remarks>The loaded GameObject is available on the assetLoaderContext.RootGameObject field.</remarks>
        /// <param name="assetLoaderContext">The context used to load the Model.</param>
        private void OnLoad(AssetLoaderContext assetLoaderContext)
        {
            Debug.Log("Model loaded. Loading materials.");
        }
    }
}
