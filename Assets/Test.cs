using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using System.Threading.Tasks;
public class Test : MonoBehaviour
{
    public static void YourCallbackMethod(BackendReturnObject result)
    {
        // 여기에 결과를 이용한 작업을 수행하는 로직을 구현
        Debug.Log("Received backend result: " + result.ToString());
    }

    public BackendReturnObject A()
    {
        BackendReturnObject bro = new BackendReturnObject();
        Debug.Log("A Start");
        for(int i = 0; i< 1000; i++)
        {
            
            Debug.Log("A :" + i);
        }
        Debug.Log("A End");

        return bro;
    }
    public BackendReturnObject B()
    {
        BackendReturnObject bro = new BackendReturnObject();
        Debug.Log("B");
        return bro;
    }

    public BackendReturnObject C()
    {
        BackendReturnObject bro = new BackendReturnObject();
        Debug.Log("C");
        return bro;
    }

    public void AProcess()
    {
        SendQueue.Enqueue(A, bro =>
        {
            Debug.Log("Aprocesss OK");
        });
    }

    public void BProcess()
    {
        SendQueue.Enqueue(B, bro =>
        {
            Debug.Log("Bprocesss OK");
        });
    }

    public void CProcess()
    {
        SendQueue.Enqueue(C, bro =>
        {
            Debug.Log("Cprocesss OK");
        });
    }
    private async void Update()
    {
        // SendQueue가 초기화 되었을 때만 Poll 함수를 호출
        if (SendQueue.IsInitialize)
        {
            // SendQueue를 정상적으로 사용하기 위해서는 
            // 아래 Poll 함수가 반드시 정기적으로 호출되어야 합니다.
            BackEnd.SendQueue.Poll();
        }
        if (Input.GetKeyDown(KeyCode.F3))
        {
            AProcess();
            BProcess();
            CProcess();
        }

        if(Input.GetKeyDown(KeyCode.F2))
        {
            A();
            B();
            C();
        }
        if(Input.GetKey(KeyCode.A))
        {
            BackEnd.Backend.BMember.DeleteGuestInfo();
        }
    }

    private IEnumerator DelayedCoroutine(float delayTime)
    {
        Debug.Log("Coroutine started.");

        // 지정된 시간까지 기다립니다.
        yield return new WaitForSeconds(delayTime);

        Debug.Log("Coroutine finished after " + delayTime + " seconds.");
    }
}
