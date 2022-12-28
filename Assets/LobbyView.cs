using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;

public class LobbyView : MonoBehaviour
{
    public Button match_btn;

    private void Awake()
    {
        match_btn.OnClickAsObservable().Subscribe(_ =>
        {
            BackendManager.Instance.RequestJoinMatchMakingServer();
        }).AddTo(this.gameObject);
    }
}
