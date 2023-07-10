using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UniRx;
public class TitleSceneHandler : MonoBehaviour
{
    #region UI
    public TMP_Text title_txt;
    public Button googleSignUp_btn;
    public Button appleSignUp_btn;
    public Button facebookSignUp_btn;
    public Button guestSignUp_btn;
    #endregion

    #region Data
    #endregion

    #region Procedure
    private LoginProcedure loginProcedure = new();
    #endregion

    #region Subscribe
    private void SubscribeGoogleSignUp()
    {
        googleSignUp_btn.OnClickAsObservable().Subscribe(_ =>
        {
            loginProcedure.GoogleLogin();
        }).AddTo(this.gameObject);
    }
    #endregion

    public void Awake()
    {
        SubscribeGoogleSignUp();
    }
}
