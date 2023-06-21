using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using ThreeRabbitPackage.DesignPattern;

public class TilePresenter : TRSingleton<TilePresenter>
{
    private TileModel _tileModel = new TileModel();
    private TileView _tileView = new TileView();
    private TRSpriteResources tileResources;

    private void Awake()
    {
        tileResources = Resources.Load<TRSpriteResources>("TileImage");
    }
    public void SetTile(TileModel tileModel, TileView tileView)
    {
        tileView.txt.text = tileModel.num;
        tileView.img.sprite = tileResources.spriteDictionary[tileModel.color];
    }
}
