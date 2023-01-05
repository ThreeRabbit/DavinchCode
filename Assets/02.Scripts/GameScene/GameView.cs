using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameView : MonoBehaviour
{
    public GameObject[] players;

    public void Awake()
    {
        GamePresenter.Instance.InitGameView(this);
    }
}
