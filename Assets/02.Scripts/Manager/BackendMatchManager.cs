using System.Collections;
using System.Collections.Generic;
using BackEnd;
using BackEnd.Tcp;
using UnityEngine;
using System.Threading.Tasks;
using UniRx;
using ThreeRabbitPackage;
using ThreeRabbitPackage.DesignPattern;

public class BackendMatchManager : TRSingleton<BackendMatchManager>
{
    #region Private Variable
    private enum LogType { NONE, GREEN, YELLOW, RED }
    private bool isConnectMatchServer = false;
    private string serverAddress;
    private ushort serverPort;
    private string roomToken;
    #endregion

    #region Public Variable
    public TRStringResources matchCardIndate;
    public int matchTime = 10;
    #endregion

    #region Subject
    public Subject<JoinChannelEventArgs> JoinMatchMakingServer = new Subject<JoinChannelEventArgs>();
    public Subject<LeaveChannelEventArgs> LeaveMatchMakingServer = new Subject<LeaveChannelEventArgs>();
    public Subject<Unit> MatchMakingRoomCreate = new Subject<Unit>();
    public Subject<Unit> MatchMakingRoomJoin = new Subject<Unit>();
    public Subject<MatchMakingResponseEventArgs> MatchMaking = new Subject<MatchMakingResponseEventArgs>();
    public Subject<Unit> CancelMatchMaking = new Subject<Unit>();
    public Subject<Unit> JoinGameServer = new Subject<Unit>();
    public Subject<Unit> LeaveGameServer = new Subject<Unit>();
    public Subject<Unit> JoinGameRoom = new Subject<Unit>();
    public Subject<Unit> SessionListInServer = new Subject<Unit>();
    public Subject<Unit> MatchInGameStart = new Subject<Unit>();
    #endregion

    #region Log
    private void BackendLog(BackendReturnObject bro, LogType logType = LogType.NONE, string funcName = "")
    {
        switch (logType)
        {
            case LogType.NONE:
                Debug.Log($"BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}");
                break;

            case LogType.GREEN:
                Debug.Log($"<color=green>BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
                break;

            case LogType.YELLOW:
                Debug.LogWarning($"<color=yellow>BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
                break;

            case LogType.RED:
                Debug.LogError($"<color=red>BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
                break;

            default:
                Debug.Log($"BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}");
                break;
        }
    }
    private void BackendLog(string message, LogType logType = LogType.NONE, string funcName = "")
    {
        switch (logType)
        {
            case LogType.NONE:
                Debug.Log($"BackendManager {funcName}: {message}");
                break;

            case LogType.GREEN:
                Debug.Log($"<color=green> BackendManager {funcName}: {message} </color>");
                break;

            case LogType.YELLOW:
                Debug.LogWarning($"<color=yellow> BackendManager {funcName}: {message} </color>");
                break;

            case LogType.RED:
                Debug.LogError($"<color=red> BackendManager {funcName}: {message} </color>");
                break;

            default:
                Debug.Log($"BackendManager {funcName}: {message}");
                break;
        }
    }

    private string NOTCONNECT_MATCHSERVER = "매치 서버에 연결되어 있지 않습니다.";
    private string RECONNECT_MATCHSERVER = "매치 서버에 접속을 시도합니다.";
    private string FAIL_CONNECT_MATCHSERVER = "매치 서버 접속 실패 : {0}";
    private string SUCCESS_CONNECT_MATCHSERVER = "매치 서버 접속 성공";
    private string SUCCESS_MATCHMAKE = "매칭 성공 : {0}";
    private string SUCCESS_REGIST_MATCHMAKE = "매칭 대기열에 등록되었습니다.";
    private string FAIL_REGIST_MATCHMAKE = "매칭 실패 : {0}";
    private string CANCEL_MATCHMAKE = "매칭 신청 취소 : {0}";
    private string INVAILD_MATCHTYPE = "잘못된 매치 타입입니다.";
    private string INVALID_MODETYPE = "잘못된 모드 타입입니다.";
    private string INVALID_OPERATION = "잘못된 요청입니다\n{0}";
    private string EXCEPTION_OCCUR = "예외 발생 : {0}\n다시 매칭을 시도합니다.";
    #endregion

    private void Update()
    {
        Poll();
    }

    private void Poll()
    {
        Backend.AsyncPoll();
        if (isConnectMatchServer)
        {
            Backend.Match.Poll();
        }
    }

    #region Backend Match Request

    /// <summary>
    /// 매칭 서버에 접속을 요청
    /// </summary>
    public Task<bool> RequestJoinMatchMakingServer()
    {
        var tcs = new TaskCompletionSource<bool>();

        // 이미 연결되어 있는 경우 리턴
        if (isConnectMatchServer)
        {
            tcs.SetResult(false);
            return tcs.Task;
        }

        // Resoponse에서 문제가 발생한다면 리턴
        if (!Backend.Match.JoinMatchMakingServer(out var errorInfo))
        {
            var errorLog = string.Format(FAIL_CONNECT_MATCHSERVER, errorInfo.ToString());
            TRLog.Red(errorLog);
            tcs.SetResult(false);
            return tcs.Task;
        }

        isConnectMatchServer = true;
        tcs.SetResult(true);
        return tcs.Task;
    }

    /// <summary>
    /// 매칭 서버에 접속 종료를 요청
    /// </summary>
    public void RequestLeaveMatchMakingServer()
    {
        Backend.Match.LeaveMatchMakingServer();
        TRLog.Green("LeaveMatchMakingServer");
    }

    /// <summary>
    /// 매칭 대기 방을 생성
    /// 혼자 매칭을 하더라도 무조건 방을 생성한 뒤 매칭을 신청해야 함
    /// </summary>
    public Task<bool> RequestCreateMatchRoom()
    {
        var tcs = new TaskCompletionSource<bool>();
        // 매청 서버에 연결되어 있지 않으면 매칭 서버 접속
        if (!isConnectMatchServer)
        {
            Debug.Log(NOTCONNECT_MATCHSERVER);
            Debug.Log(RECONNECT_MATCHSERVER);
            RequestJoinMatchMakingServer();
            // 잠시 후 다시 시도하세요. 팝업 호출 필요(의존성 역전 때문에 잠시 보류)
            tcs.SetResult(false);
            return tcs.Task;
        }
        Backend.Match.CreateMatchRoom();
        tcs.SetResult(true);
        return tcs.Task;
    }

    /// <summary>
    /// 매칭을 신청
    /// </summary>
    /// <param name="matchType">Random, Point, MMR</param>
    /// <param name="matchModeType">1대1, 팀전, 개인전</param>
    /// <param name="matchCardIndate">뒤끝 서버의 매치 생성 날짜</param>
    public void RequestMatchMaking(MatchType matchType, MatchModeType matchModeType, string matchCardIndateKey)
    {
        Backend.Match.RequestMatchMaking(matchType, matchModeType, matchCardIndate.stringDictionary[matchCardIndateKey]);
    }

    public void RequestCancleMatchMaking()
    {
        Backend.Match.CancelMatchMaking();
        CancelMatchMaking.OnNext(Unit.Default);
    }
    #endregion

    #region Backend Match Response
    /// <summary>
    /// 매칭 서버 핸들러 등록
    /// </summary>
    public void MatchServerHandler()
    {
        ResponseJoinMatchMakingServer();
        ResponseLeaveMatchMakingServer();
        ResponseMatchMaking();
        ResponseMatchMakingRoomCreate();
        ResponseMatchMakingRoomJoin();
    }

    /// <summary>
    /// 매칭 서버 접속 요청 후 응답
    /// </summary>
    private void ResponseJoinMatchMakingServer()
    {
        Backend.Match.OnJoinMatchMakingServer = (JoinChannelEventArgs args) =>
        {
            if (args.ErrInfo == ErrorInfo.Success)
            {
                BackendLog($"{args.ErrInfo}", LogType.GREEN, "ResponseJoinMatchMakingServer");
                JoinMatchMakingServer.OnNext(args);
            }
            else
            {
                BackendLog($"{args.ErrInfo}", LogType.RED, "ResponseJoinMatchMakingServer");
            }
        };
    }

    /// <summary>
    /// 매칭 서버 접속 해제 후 응답
    /// </summary>
    private void ResponseLeaveMatchMakingServer()
    {
        Backend.Match.OnLeaveMatchMakingServer += (args) =>
        {
            // 매칭 서버에서 접속 종료할 때 호출
            TRLog.Green("OnLeaveMatchMakingServer : " + args.ErrInfo);
            LeaveMatchMakingServer.OnNext(args);

            if (args.ErrInfo.Category.Equals(ErrorCode.DisconnectFromRemote)
                || args.ErrInfo.Category.Equals(ErrorCode.Exception)
                || args.ErrInfo.Category.Equals(ErrorCode.NetworkTimeout))
            {
                // 서버에서 강제로 끊은 경우
                //if (LobbyUI.GetInstance())
                //{
                //    LobbyUI.GetInstance().MatchRequestCallback(false);
                //    LobbyUI.GetInstance().CloseRoomUIOnly();
                //    LobbyUI.GetInstance().SetErrorObject("매칭서버와 연결이 끊어졌습니다.\n\n" + args.ErrInfo.Reason);
                //}
            }
        };
    }
    /// <summary>
    /// 매칭 신청 후 응답
    /// </summary>
    private void ResponseMatchMaking()
    {
        Backend.Match.OnMatchMakingResponse += (args) =>
        {
            BackendLog($"{args.ErrInfo}", LogType.GREEN, "ResponseMatchMaking");
            serverAddress = args.RoomInfo.m_inGameServerEndPoint.m_address;
            serverPort = args.RoomInfo.m_inGameServerEndPoint.m_port;
            roomToken = args.RoomInfo.m_inGameRoomToken;
            MatchMaking.OnNext(args);
        };
    }

    /// <summary>
    /// 대기 방 생성 / 실패에 대한 응답
    /// </summary>
    private void ResponseMatchMakingRoomCreate()
    {
        Backend.Match.OnMatchMakingRoomCreate += (args) =>
        {
            BackendLog($"{args.ErrInfo}", LogType.GREEN, "ResponseMatchMaikngRoomCreate");
            MatchMakingRoomCreate.OnNext(Unit.Default);
        };
    }

    /// <summary>
    /// 대기방에 유저가 입장했을 때 호출되는 이벤트입니다.
    /// 유저가 입장할 때마다 대기방에 존재하는 모든 유저에게 호출됩니다.
    /// 입장한 유저에게도 호출됩니다.
    /// 대기방을 생성했을 때는 호출되지 않습니다.
    /// </summary>
    private void ResponseMatchMakingRoomJoin()
    {
        Backend.Match.OnMatchMakingRoomJoin = (MatchMakingGamerInfoInRoomEventArgs args) =>
        {
            BackendLog($"{args.ErrInfo}, {args.Reason}, {args.UserInfo.m_nickName}, {args.UserInfo.m_sessionId}", LogType.NONE, "OnMatchMakingRoomJoin");
            MatchMakingRoomJoin.OnNext(Unit.Default);
        };
    }

    #endregion

    #region Backend InGame Request
    /// <summary>
    /// 인게임 접속
    /// </summary>
    /// <param name="isReconnect">재접속 시 인자 값을 true로 설정</param>
    public void RequestJoinGameServer(bool isReconnect)
    {
        ErrorInfo errorInfo = null;
        if (Backend.Match.JoinGameServer(serverAddress, serverPort, isReconnect, out errorInfo) == false)
        {
            BackendLog(errorInfo.Reason, LogType.RED, "JoinGameServer");
            return;
        }
        BackendLog($"{errorInfo.Category}, {errorInfo.Reason}, {errorInfo.Detail}", LogType.GREEN, "JoinGameServer");
    }

    /// <summary>
    /// 인게임 서버 접속 종료
    /// </summary>
    public void RequestLeaveGameServer()
    {
        Backend.Match.LeaveGameServer();
    }

    /// <summary>
    /// 게임 방 입장
    /// </summary>
    public void RequestJoinGameRoom()
    {
        Backend.Match.JoinGameRoom(roomToken);
    }
    #endregion

    #region Backend InGame Response

    public void InGameServerHandler()
    {
        ResponseJoinGameServer();
        RseponseLeaveGameServer();
        ResponseSessionListInServer();
        ResponseJoinGameRoom();
        ResponseMatchInGameStart();
    }
    /// <summary>
    /// 인게임 서버 접속에 대한 응답
    /// </summary> 
    public void ResponseJoinGameServer()
    {
        Backend.Match.OnSessionJoinInServer += (args) =>
        {
            Debug.Log($"OnSessionJoinInServer : {args.ErrInfo}: {args.ErrInfo.Category}, {args.ErrInfo.Detail}, {args.ErrInfo.Reason}");

            JoinGameServer.OnNext(Unit.Default);
        };
    }

    /// <summary>
    /// 인게임 접속 종료에 대한 응답
    /// </summary>
    public void RseponseLeaveGameServer()
    {
        Backend.Match.OnLeaveInGameServer = (MatchInGameSessionEventArgs args) =>
        {
            BackendLog($"{args.ErrInfo}, {args.Reason}, {args.GameRecord}", LogType.NONE, "OnLeaveInGameServer");
            LeaveGameServer.OnNext(Unit.Default);
        };
    }

    /// <summary>
    /// 유저가 게임방 접속에 성공했을 때 입장한 유저에게만 최초 1회 호출되는 이벤트 핸들러입니다.
    /// 자신을 포함하여 현재 게임방에 접속해 있는 유저들의 세션 정보와 매칭 기록이 포함되어 있습니다.
    /// 인게임 서버에 재접속했을 때도 호출됩니다.
    /// </summary>
    public void ResponseSessionListInServer()
    {
        Backend.Match.OnSessionListInServer = (MatchInGameSessionListEventArgs args) =>
        {
            BackendLog($"{args.ErrInfo}, {args.Reason}, {args.GameRecords}", LogType.NONE, "OnSessionListInServer");
            SessionListInServer.OnNext(Unit.Default);
        };
    }
    /// <summary>
    /// 게임방 입장 후 응답
    /// </summary>
    public void ResponseJoinGameRoom()
    {
        Backend.Match.OnMatchInGameAccess = (MatchInGameSessionEventArgs args) =>
        {
            BackendLog($"{args.ErrInfo}, {args.Reason}, {args.GameRecord}", LogType.NONE, "OnMatchInGameAccess");
            JoinGameRoom.OnNext(Unit.Default);
        };
    }


    /// <summary>
    /// 게임 시작 후 응답
    /// </summary>
    public void ResponseMatchInGameStart()
    {
        Backend.Match.OnMatchInGameStart = () =>
        {
            BackendLog($"Game Start", LogType.GREEN, "OnMatchInGameAccess");
            MatchInGameStart.OnNext(Unit.Default);
        };
    }

    #endregion
}
