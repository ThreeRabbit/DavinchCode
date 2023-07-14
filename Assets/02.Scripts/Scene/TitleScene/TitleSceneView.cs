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
            .SetMessage("�޽��� Ȯ��")
            .SetCancel(
                cancelAction: obj =>
                {
                    Destroy(obj);
                    Debug.Log("ĵ�� ��ư Ŭ��");
                },
                cancelText: "ĵ��")
            .Build();
    }
}
