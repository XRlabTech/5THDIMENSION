using System.Collections.Generic;
using UnityEngine;

namespace InfallibleCode.Completed
{
    public class CompositeInteractable : MonoBehaviour, IModuleInteractable
    {
        [SerializeField] private List<GameObject> interactables;

        public void Gazed()
        {
            print("Interact");
            foreach (var go in interactables)
            {
                var interactable = go.GetComponent<IModuleInteractable>();
                interactable?.Gazed();
            }
        }

        public void Touched()
        {
            throw new System.NotImplementedException();
        }
    }
}