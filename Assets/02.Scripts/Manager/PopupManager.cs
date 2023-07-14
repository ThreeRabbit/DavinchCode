using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ThreeRabbitPackage;
using ThreeRabbitPackage.DesignPattern;
using System.Linq;

namespace ThreeRabbitPackage
{
    public class PopupManager : TRSingleton<PopupManager>
    {
        public TRGameObjectResources trPopupResources;
        [HideInInspector] public List<TRPopup> trPopupList = new List<TRPopup>();

        private void Awake()
		{
            trPopupResources = Resources.Load<TRGameObjectResources>("PopupResources");
		}

		public void InstantiatePopup(string popupName)
        {
            GameObject obj = Instantiate(trPopupResources.gameObjectDictionary[popupName], this.transform);
        }

        public void AddPopup(TRPopup popup)
		{
            if (trPopupList.Contains(popup)) return;
            trPopupList.Add(popup);
        }

        public void RemovePopup(TRPopup popup)
		{
            if (!trPopupList.Contains(popup)) return;
            trPopupList.Remove(popup);
        }
    }
}