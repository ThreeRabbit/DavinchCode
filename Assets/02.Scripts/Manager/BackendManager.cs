using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using ThreeRabbitPackage;
using ThreeRabbitPackage.DesignPattern;
using BackEnd;
using BackEnd.Tcp;
using UniRx;

public class BackendManager : TRSingleton<BackendManager>
{
    #region Private Variable
    private enum LogType { NONE, GREEN, YELLOW, RED}
    private bool isConnectMatchServer = false;
    #endregion

    #region public Variable
    public TRStringResources matchCardIndate;
    #endregion

    #region Subject
    public Subject<Unit> JoinMatchMakingServer = new Subject<Unit>();
    public Subject<Unit> LeaveMatchMakingServer = new Subject<Unit>();
    public Subject<Unit> MatchMakingRoomCreate = new Subject<Unit>();
    public Subject<Unit> MatchMaking = new Subject<Unit>();
    public Subject<Unit> CancelMatchMaking = new Subject<Unit>();
    #endregion

    #region Log
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
                Debug.Log($"<color=green>BackendManager {funcName}: {message}</color>");
                break;

            case LogType.YELLOW:
                Debug.LogWarning($"<color=yellow>BackendManager {funcName}: {message}</color>");
                break;

            case LogType.RED:
                Debug.LogError($"<color=red>BackendManager {funcName}: {message}</color>");
                break;

            default:
                Debug.Log($"BackendManager {funcName}: {message}");
                break;
        }
    }

    #endregion

    #region Private Method

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

    #endregion

    #region Backend Base

    public void Init(UnityAction success = null, UnityAction<string> fail = null)
    {
        var bro = Backend.Initialize(true);
        if (bro.IsSuccess())
        {
            BackendLog(bro, LogType.GREEN, "Init");
            success?.Invoke();
        }
        else
        {
            BackendLog(bro, LogType.RED, "Init");
            fail?.Invoke(bro.GetMessage());
        }
    }

    public void GuestLogin(UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.GuestLogin, "게스트 로그인으로 로그인함", callback => {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void TokenLogin(UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.LoginWithTheBackendToken, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void CreateNickname(string nickname, UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.CreateNickname, nickname, ( callback ) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "CreateNickname");
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void UpdateNickname(string nickname, UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.UpdateNickname, nickname, ( callback ) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void CheckNicknameDuplication(string nickname, UnityAction success = null, UnityAction<string> fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.CheckNicknameDuplication, nickname, ( callback ) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke(callback.GetMessage());
            }
        });
    }

    #endregion

    #region Backend Match Request

    /// <summary>
    /// 매칭 서버에 접속을 요청
    /// </summary>
    public void RequestJoinMatchMakingServer()
    {
        // 이미 연결되어 있는 경우 리턴
        if (isConnectMatchServer) return;

        ErrorInfo errorInfo;
        isConnectMatchServer = true;
        if (!Backend.Match.JoinMatchMakingServer(out errorInfo))
        {
            var errorLog = string.Format(FAIL_CONNECT_MATCHSERVER, errorInfo.ToString());
            TRLog.Green(errorLog);
        }
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
    public bool RequestCreateMatchRoom()
    {
        // 매청 서버에 연결되어 있지 않으면 매칭 서버 접속
        if (!isConnectMatchServer)
        {
            Debug.Log(NOTCONNECT_MATCHSERVER);
            Debug.Log(RECONNECT_MATCHSERVER);
            RequestJoinMatchMakingServer();
            // 잠시 후 다시 시도하세요. 팝업 호출 필요
            return false;
        }
        Backend.Match.CreateMatchRoom();
        return true;
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
    }
    
    /// <summary>
    /// 매칭 서버 접속 요청 후 응답
    /// </summary>
    private void ResponseJoinMatchMakingServer()
    {
        Backend.Match.OnJoinMatchMakingServer += (args) =>
        {
            BackendLog($"{args.ErrInfo}", LogType.GREEN, "ResponseJoinMatchMakingServer"); 
            JoinMatchMakingServer.OnNext(Unit.Default);
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
            LeaveMatchMakingServer.OnNext(Unit.Default);

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
            Debug.Log("OnMatchMakingResponse : " + args.ErrInfo + " : " + args.Reason);
            MatchMaking.OnNext(Unit.Default);
        };
    }

    /// <summary>
    /// 대기 방 생성 / 실패에 대한 응답
    /// </summary>
    private void ResponseMatchMakingRoomCreate()
    {
        Backend.Match.OnMatchMakingRoomCreate += (args) =>
        {
            Debug.Log("OnMatchMakingRoomCreate : " + args.ErrInfo + " : " + args.Reason);
            MatchMakingRoomCreate.OnNext(Unit.Default);
        };
    }
    #endregion
}
