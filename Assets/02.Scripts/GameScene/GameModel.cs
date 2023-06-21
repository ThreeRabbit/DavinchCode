using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;

public class GameModel
{
    public TRStringResources tileData;
    public TRSpriteResources tileImage;

    [HideInInspector] public Stack<TileModel> blackTiles = new Stack<TileModel>();
    [HideInInspector] public Stack<TileModel> whiteTiles = new Stack<TileModel>();


    public void CreateTiles(TileModel.TileType tileType)
    {
        tileData = Resources.Load<TRStringResources>("TileData");
        
        // 타일을 셔플하기 위한 임시 리스트
        List<TileModel> tiles = new List<TileModel>();

        // 타일 데이터 초기화
        for (int num = 0; num < tileData.stringDictionary.Count; num++)
        {
            TileModel tile = new TileModel();
            tile.num = tileData.stringDictionary[$"{num}"];
            tile.color = tileType.ToString();

            tiles.Add(tile);
        }

        // 타일 셔플
        tiles = tiles.OrderBy(t => Guid.NewGuid()).ToList();

        // 스택에 타일 추가
        switch (tileType)
        {
            case TileModel.TileType.Black:
                tiles.ForEach(tile =>
                {
                    blackTiles.Push(tile);
                });
                break;
            case TileModel.TileType.White:

                tiles.ForEach(tile =>
                {
                    whiteTiles.Push(tile);
                });
                break;
        }
    }

    public TileModel GetTile(TileModel.TileType tileType)
    {
        switch (tileType)
        {
            case TileModel.TileType.Black:
                return blackTiles.Pop();

            case TileModel.TileType.White:
                return whiteTiles.Pop();
        }

        return null;
    }
}
