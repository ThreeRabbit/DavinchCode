using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;

public class GetTilePopup : MonoBehaviour
{
    public Button black_btn;
    public Text black_txt;

    public Button white_btn;
    public Text white_txt;

    private void Awake()
    {
        GamePresenter.Instance.InitGetTilePopup(this);
        SubscribeUI();
    }

    private void SubscribeUI()
    {
        black_btn.OnClickAsObservable().Subscribe(_ =>
        {
            GamePresenter.Instance.AddTile(TileModel.TileType.Black);
            
        }).AddTo(this.gameObject);

        white_btn.OnClickAsObservable().Subscribe(_ =>
        {
            GamePresenter.Instance.AddTile(TileModel.TileType.White);
        }).AddTo(this.gameObject);
    }


}
