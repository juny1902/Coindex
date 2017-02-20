// pseudo : JSON-RPC 2.0 라이브러리 참조
#include <iostream>
#include <string>
using namespace std;
class Wallet {
private:
	string serverADDR; // RPC 서버 주소 지정
	string serverPORT; // RPC 서버 포트 지정 
	string userID; // RPC 서버 ID 지정
	string userPW; // RPC 서버 PW 지정

	// 지갑 정보를 받기 위한 변수
	string walletID;
	string privateKey;
	string publicKey;

	// 트랜잭션 관련 변수
	string raw_txID;
	string txID_1;
	string txID_2;
	bool isSigned;



public:
	Wallet(string ADDR, string PORT, string ID, string PW) : serverADDR(ADDR),serverPORT(PORT),userID(ID),userPW(PW) // 입력받은 값으로 멤버 초기화
	{
		// 주소,포트,ID,PW 를 이용하여 RPC 연결 시도
		if (true) // -> 성공 : 입력받은 값을 클래스 내의 변수에 저장
		{	
			
		}
		else // -> 실패 : 프로그램 종료
		{
			
		}
	}
	int sendTransaction(string walletTo, double amount) // 어드레스, 금액을 통해 트랜잭션 요청, 그리고 승인여부 (confirmation) 조회
	{
		/* <형식>
		Step 1. // listunspent 에서 소진되지 않은 코인 조회
			// walletTo 로 부터 amount 에 알맞은 txid 를 찾아냄 


		Step 2. // 새로운 rawtransaction 생성
			
			createrawtransaction 
			'[{
				"txid" : "<txid_of_selected_block>", 
				"vout" : <vout>
			}]'
			'{"walletTo : amount", "walletID : <amount_change>"}'
			
			-> rawtransaction 값 얻음

		Step 3. // rawTransaction 을 서명

			walletpassphrase "지갑비밀번호" "소요시간(s)"
			signrawtransaction "rawtransaction"
		
		Step 4. // rawtransaction 을 보내 새로운 txID 얻음.
		
			sendrawtransaction "rawtransaction"

		Step 5. // gettransaction 을 통해 새로운 txID 조회
			
			조회를 통해 confirmation의 수를 조회할 수 있음.


		*/
	}

	void sendCoin(string walletID, double amount)
	{
		// walletID 로 amount 만큼 보내는 RPC 전송. (sendtoaddress 사용)
		//
	}

	void sendFrom(string walletFrom, string walletTo, double amount)
	{
		// walletFrom 에서 walletTo 로 amount 만큼 보내는 RPC 전송. (sendfromaddress 사용)
	}
	




	~Wallet() { // 인스턴스가 소멸될때
		cout << "접속이 종료되었습니다." << endl; 
	}







};