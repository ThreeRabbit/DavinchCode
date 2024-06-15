using UniRx;
using System.Threading.Tasks;

public class PlayerData
{
    public ReactiveProperty<int> level = new ReactiveProperty<int>();
    public ReactiveProperty<int> exp = new ReactiveProperty<int>();

    // 뒤끝DB에 등록 된 PlayerData 테이블
    private readonly string playerDataTableName = "PlayerData";

    public async Task<bool> Request()
    {
        var tcs = new TaskCompletionSource<bool>();

        // 뒤끝DB에 등록 된 PlayerData 테이블
        string[] playerDataColumn = new string[] { "level", "exp" };

        // 뒤끝 서버에 rowInDate를 요청
        var rowInDate = await BackendManager.Instance.RequestRowInDateAsync(playerDataTableName);

        // PlayerData테이블과 rowInDate를 통해 플레이어 데이터를 초기화 함
        var playerData = await BackendManager.Instance.RequestGetMyData(playerDataTableName, rowInDate, playerDataColumn);

        // 값을 초기화 함
        level.Value = ushort.Parse(playerData["level"].ToString());
        exp.Value = ushort.Parse(playerData["exp"].ToString());
        tcs.SetResult(true);
        return tcs.Task.Result;
    }

    public async Task<bool> RequestUpdate(BackEnd.Param param)
    {
        // 뒤끝 서버에 rowInDate를 요청
        var rowInDate = await BackendManager.Instance.RequestRowInDateAsync(playerDataTableName);

        if(!await BackendManager.Instance.RequestUpdateV2(playerDataTableName, rowInDate, BackEnd.Backend.UserInDate, param))
        {
            return false;
        }

        return true;
    }
    public async Task<bool> RequestAddPlayerData()
    {
        // PlayerData의 파라미터 값 추가
        BackEnd.Param param = new BackEnd.Param();
        param.Add("level", 1);
        param.Add("exp", 0);

        // PlayerData 테이블 추가 및 파라미터 삽입 요청
        if (!await BackendManager.Instance.RequestTableInsertAsync("PlayerData", param))
        {
            return false;
        }

        return true;
    }
}
