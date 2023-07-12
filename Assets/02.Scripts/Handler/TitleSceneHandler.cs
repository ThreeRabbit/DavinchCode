using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UniRx;
public class TitleSceneHandler : MonoBehaviour
{
    #region MVP
    private TitleSceneModel titleSceneModel;
    private TitleSceneView titleSceneView;
    private TitleScenePresenter titleScenePresenter;
	#endregion

	#region OnlyHandler
	public TMP_Text title_txt;
    public Button googleSignUp_btn;
    public Button appleSignUp_btn;
    public Button facebookSignUp_btn;
    public Button guestSignUp_btn;
    
    private readonly LoginProcedure loginProcedure = new();
    
    private void SubscribeGoogleSignUp()
    {
        googleSignUp_btn.OnClickAsObservable().Subscribe(_ =>
        {
            loginProcedure.GoogleLogin();
        }).AddTo(this.gameObject);
    }

    private void SubscribeGuestLogin()
    {
        guestSignUp_btn.OnClickAsObservable().Subscribe(_ =>
        {
            loginProcedure.GuestLogin();
        }).AddTo(this.gameObject);
    }

	#endregion

	public void Start()
    {
        // MVP
        titleSceneModel = new TitleSceneModel();
        titleSceneView = FindObjectOfType<TitleSceneView>();
        titleScenePresenter = new TitleScenePresenter(titleSceneModel, titleSceneView);

        // OnlyHandler
        //SubscribeGoogleSignUp();
        //SubscribeGuestLogin();
    }

	public void OnDestroy()
	{
        // MVP
        titleScenePresenter.Dispose();
    }
}
