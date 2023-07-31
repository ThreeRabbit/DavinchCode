using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LobbySceneMainPanel : MonoBehaviour
{
    [Header("User Info")]
    public Text nickname_txt;
    public Slider levelGauge_slider;
    public TMP_Text exp_txt;
    public TMP_Text level_txt;

    [Header("Button")]
    public Button match_btn;
}
