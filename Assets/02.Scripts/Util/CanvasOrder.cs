using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;

public class CanvasOrder : MonoBehaviour
{
    public TRIntResources canvasOrder;
    public string canvasOrderKey;

    private void Awake()
    {
        this.GetComponent<Canvas>().sortingOrder = canvasOrder.intDictionary[canvasOrderKey];
    }
}
