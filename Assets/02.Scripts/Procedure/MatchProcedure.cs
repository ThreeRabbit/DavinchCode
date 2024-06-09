using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;
using UnityEngine.SceneManagement;
using UniRx;

public class MatchProcedure : MonoBehaviour
{
	private void Awake()
	{
		SubscribeResponseJoinMatchMakingServer();
		SubscribeResponseLeaveMatchMakingServer();
		SubscribeResponseMatchMaking();
		SubscribeResponseMatchMakingRoomCreate();
		SubscribeResponseMatchMakingRoomJoin();
		SubscribeCancelMatchMaking();
	}

	/// <summary>
	/// 매치 서버 접속
	/// </summary>
	public static void JoinMatchMakingServer()
	{
		BackendManager.Instance.RequestJoinMatchMakingServer();
	}

	/// <summary>
	/// 대기방 생성
	/// </summary>
	public static void CreateMatchRoom()
	{
		BackendManager.Instance.RequestCreateMatchRoom();
	}

	/// <summary>
	/// 매칭 신청
	/// </summary>
	/// <param name="matchType">매칭 타입</param>
	/// <param name="matchModeType">매치 모드 타입</param>
	/// <param name="matchCardIndateKey">매치카드 인데이</param>
	public void MatchMaking(BackEnd.Tcp.MatchType matchType, BackEnd.Tcp.MatchModeType matchModeType, string matchCardIndateKey)
	{
		BackendManager.Instance.RequestMatchMaking(matchType, matchModeType, matchCardIndateKey);
	}

	/// <summary>
	/// 매칭 취소
	/// </summary>
	public void CancelMatchMaking()
	{
		BackendManager.Instance.RequestCancleMatchMaking();
	}


	/// <summary>
	/// 매치 서버에 접속 했을 때
	/// </summary>
	public void SubscribeResponseJoinMatchMakingServer()
	{
		BackendManager.Instance.JoinMatchMakingServer.Subscribe(joinMatchMakingServer =>
		{
			if (joinMatchMakingServer.ErrInfo == BackEnd.Tcp.ErrorInfo.Success)
			{
				CreateMatchRoom();
			}
		}).AddTo(this.gameObject);
	}

	/// <summary>
	/// 매칭 신청 후 응답
	/// </summary>
	public void SubscribeResponseMatchMaking()
	{
		BackendManager.Instance.MatchMaking.Subscribe(matchMaking =>
		{
			switch (matchMaking.ErrInfo)
			{
				case BackEnd.Tcp.ErrorCode.Success:
					//JoinGameServer();
					break;
				case BackEnd.Tcp.ErrorCode.Exception:
					break;
				case BackEnd.Tcp.ErrorCode.SocketOperationError:
					break;
				case BackEnd.Tcp.ErrorCode.AuthenticationFailed:
					break;
				case BackEnd.Tcp.ErrorCode.BrokenStream:
					break;
				case BackEnd.Tcp.ErrorCode.NetworkTimeout:
					break;
				case BackEnd.Tcp.ErrorCode.DisconnectFromLocal:
					break;
				case BackEnd.Tcp.ErrorCode.DisconnectFromRemote:
					break;
				case BackEnd.Tcp.ErrorCode.InvalidMessage:
					break;
				case BackEnd.Tcp.ErrorCode.InvalidOperation:
					break;
				case BackEnd.Tcp.ErrorCode.InvalidSession:
					break;
				case BackEnd.Tcp.ErrorCode.ChannelTimeout:
					break;
				case BackEnd.Tcp.ErrorCode.BannedChat:
					break;
				case BackEnd.Tcp.ErrorCode.DuplicateConnection:
					break;
				case BackEnd.Tcp.ErrorCode.NetworkOffline:
					break;
				case BackEnd.Tcp.ErrorCode.NetworkOnline:
					break;
				case BackEnd.Tcp.ErrorCode.INTERNAL_ERROR_CODE_RESERVED_END:
					break;
				case BackEnd.Tcp.ErrorCode.MATCH_ERROR_CODE_RESERVED_BEGIN:
					break;
				case BackEnd.Tcp.ErrorCode.Match_Making_NotJoinedRoom:
					break;
				case BackEnd.Tcp.ErrorCode.Match_Making_NotFoundGamer:
					break;
				case BackEnd.Tcp.ErrorCode.Match_Making_AlreadyJoinedRoom:
					break;
				case BackEnd.Tcp.ErrorCode.Match_Making_InvalidRoom:
					break;
				case BackEnd.Tcp.ErrorCode.Match_Making_KickedByOwner:
					break;
				case BackEnd.Tcp.ErrorCode.Match_InvalidMatchType:
					break;
				case BackEnd.Tcp.ErrorCode.Match_InvalidModeType:
					break;
				case BackEnd.Tcp.ErrorCode.Match_InProgress:
					break;
				case BackEnd.Tcp.ErrorCode.Match_MatchMakingCanceled:
					break;
				case BackEnd.Tcp.ErrorCode.Match_InGame_AuthroizeFailed:
					break;
				case BackEnd.Tcp.ErrorCode.Match_InGame_Timeout:
					break;
				case BackEnd.Tcp.ErrorCode.MATCH_ERROR_CODE_RESERVED_END:
					break;
			}
		}).AddTo(this.gameObject);
	}


	/// <summary>
	/// 매칭이 취소 되었을 때
	/// </summary>
	public void SubscribeCancelMatchMaking()
	{
		BackendManager.Instance.CancelMatchMaking.Subscribe(_ =>
		{
			SceneManager.LoadSceneAsync("GameScene");
		}).AddTo(this.gameObject);
	}

	/// <summary>
	/// 매치 서버를 떠났을 때
	/// </summary>
	public void SubscribeResponseLeaveMatchMakingServer()
	{
		BackendManager.Instance.LeaveMatchMakingServer.Subscribe(args =>
		{
			if (args.ErrInfo.Category.Equals(BackEnd.Tcp.ErrorCode.DisconnectFromRemote)
				|| args.ErrInfo.Category.Equals(BackEnd.Tcp.ErrorCode.Exception)
				|| args.ErrInfo.Category.Equals(BackEnd.Tcp.ErrorCode.NetworkTimeout))
			{
				// TODO:
				// 서버에서 강제로 끊은 경우
				// 에러 메시지 팝업 등록
			}
		}).AddTo(this.gameObject);
	}

	/// <summary>
	/// 대기방 생성 했을 때
	/// </summary>
	public void SubscribeResponseMatchMakingRoomCreate()
	{
		BackendManager.Instance.MatchMakingRoomCreate.Subscribe(_ =>
		{

		}).AddTo(this.gameObject);
	}

	/// <summary>
	/// 대기방에 유저가 입장했을 때
	/// </summary>
	public void SubscribeResponseMatchMakingRoomJoin()
	{
		BackendManager.Instance.MatchMakingRoomJoin.Subscribe(_ =>
		{
		}).AddTo(this.gameObject);

	}
}
