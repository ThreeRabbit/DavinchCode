using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Linq;
using ThreeRabbitPackage;
using ThreeRabbitPackage.DesignPattern;

public class GamePresenter : TRSingleton<GamePresenter>
{
    public GameObject tilePrefab;

    private GameView _gameView;
    private GetTilePopup _getTilePopup;
    private GameModel _gameModel = new GameModel();
    List<TileModel> list = new List<TileModel>();

    private void Awake()
    {
        _gameModel.CreateTiles(TileModel.TileType.Black);
        _gameModel.CreateTiles(TileModel.TileType.White);
    }

    public void InitGameView(GameView gameView)
    {
        _gameView = gameView;
    }

    public void InitGetTilePopup(GetTilePopup getTilePopup)
    {
        _getTilePopup = getTilePopup;
    }

    public void AddTile(TileModel.TileType tileType)
    {
        TileModel tile = _gameModel.GetTile(tileType);
        GameObject obj = Instantiate(tilePrefab, _gameView.players[0].transform);

        TilePresenter.Instance.SetTile(tile, obj.GetComponent<TileView>());
    }


}
