using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;
using TMPro;

public class NicknamePopup : MonoBehaviour
{
    public Button createNickname_btn;
    public TMP_InputField nicknameField;
    public TMP_Text message;

    public void Awake()
    {
        Subscribe();
    }

    private void Subscribe()
    {
        createNickname_btn.OnClickAsObservable().Subscribe(_ =>
        {
            string nickname = nicknameField.text;

            BackendManager.Instance.CheckNicknameDuplication(
                nickname: nicknameField.text,
                success: () =>
                {
                    BackendManager.Instance.CreateNickname(nickname);
                },
                fail: (message) =>
                {
                    this.message.text = message;
                });
        }).AddTo(this.gameObject);
    }
}
