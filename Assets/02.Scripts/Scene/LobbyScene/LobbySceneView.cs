using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class LobbySceneView : MonoBehaviour
{
    [SerializeField] private LobbySceneMainPanel m_lobbySceneMainPanel;

    public LobbySceneMainPanel LobbySceneMainPanel { get => m_lobbySceneMainPanel; }
}
