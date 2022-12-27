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
        public TRGameObjectResources popupResources;

        public void OnPopup(string popupName)
        {
            GameObject obj = Instantiate(popupResources.gameObjectDictionary[popupName], this.transform);
        }

        public void OnMessage(string message)
		{
            GameObject obj = Instantiate(popupResources.gameObjectDictionary["Message"], this.transform);
            obj.GetComponentInChildren<Text>().text = message;
        }
    }

}