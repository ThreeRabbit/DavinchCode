using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TitleSceneView : MonoBehaviour
{
    #region UI
    public TMP_Text title_txt;
    public GameObject signUpPanel;
    public Button quit_btn;
    public Button language_btn;
    #endregion

    public void Start()
    {
        TRCommonPopup
            .Instantiate(ThreeRabbitPackage.PopupManager.Instance.transform)
            .SetTitle("dd")
            .SetMessage("메시지 확인")
            .SetCancel(
                cancelAction: obj =>
                {
                    Destroy(obj);
                    Debug.Log("캔슬 버튼 클릭");
                },
                cancelText: "캔슬")
            .Build();
    }
}
