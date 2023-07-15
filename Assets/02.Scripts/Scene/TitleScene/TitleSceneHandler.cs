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

	public async void Start()
    {
		// 타이틀 씬 프레젠터 초기화
        titleScenePresenter.Init(titleSceneModel, titleSceneView);

		// 최초 타이틀 씬 진입 시 signUpPanel 활성화
		titleScenePresenter.View.signUpPanel.SetActive(true);

		// SignUpPanel을 통해 로그인 시도
		if(true)
        {
			// 로그인 성공
        }
		else
        {
			// 로그인 실패
        }
	}

	private void Update()
	{
		QuitProcedure.Update();
	}
}
