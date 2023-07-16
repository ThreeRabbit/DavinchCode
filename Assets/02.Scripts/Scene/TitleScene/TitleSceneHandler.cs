using UnityEngine;
using UnityEngine.SceneManagement;
using UniRx;

/// <summary>
/// TitleScene의 초기화와 로그인 절차를 처리합니다.
/// </summary>
public class TitleSceneHandler : MonoBehaviour
{
    #region MVP
    private TitleSceneModel titleSceneModel = new TitleSceneModel();
    [SerializeField] private TitleSceneView titleSceneView;
    [SerializeField] private TitleScenePresenter titleScenePresenter;
    #endregion

	public void Start()
    {
		// 타이틀 씬 프레젠터 초기화
        titleScenePresenter.Init(titleSceneModel, titleSceneView);

		// 최초 타이틀 씬 진입 시 signUpPanel 활성화
		titleScenePresenter.View.signUpPanel.SetActive(true);

        // 유저가 로그인에 성공했을 경우 LobbyScene으로 이동
        titleSceneModel.loginSubject
            .Where(isLogin => isLogin)
            .Subscribe(_ => SceneManager.LoadSceneAsync("LobbyScene"))
            .AddTo(this.gameObject);
	}

	private void Update()
	{
		QuitProcedure.Update();
	}
}
