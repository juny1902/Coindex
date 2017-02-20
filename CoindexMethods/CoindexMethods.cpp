/*

	주의사항 : wallet.h 에서 _SERVER_IP 를 지정해주어야 합니다.

*/

#include "stdafx.h"
const string userID = "";
const string userPW = "";
const string _WalletA = "mhf6wNCZjxuG4sCzmVrXxMhtWEzQjMdL3Q"; // 박준영 지갑 (PC Testnet)
const string _WalletB = "mn8bQCPaihn84V1DiNB17aevJAkiQYFrcz"; // 저스틴형 지갑

string amount = "0.0001"; // 보낼 금액 저장할곳

int main()
{
	short ch; // 선택 분기를 위한 임시 변수
	while (1)
	{
		cout <<
			"---- 현재 상태 ----" << endl <<
			"지갑 A : " + _WalletA << endl <<
			"지갑 B : " + _WalletB << endl <<
			"서버 주소 : " + _SERVER_IP << endl <<
			"보낼 금액 : " + amount << endl <<
			"연결 상태 : " + get_connection_state() << endl <<
			"-------------------" 
		<< endl;

		cout <<
			"1. A지갑 잔액확인" << endl <<
			"2. B지갑 잔액확인" << endl <<
			"3. A->B" << endl <<
			"4. B->A" << endl <<
			"5. 보낼금액 설정"
		<< endl << ".......";

		cin >> ch; // 선택지 입력받음.

		switch (ch)
		{
		case 1:
			cout << "A지갑 잔액 : " << balance(_WalletA) << endl;
			break;
		case 2:
			cout << "B지갑 잔액 : " << balance(_WalletB) << endl;
			break;
		case 3:
			cout << "A에서 B로 송금" << endl;
			break;
		case 4:
			cout << "B에서 A로 송금" << endl;
			break;
		case 5:
			cout << "보낼 금액 입력 (단위:BTC): ";
			cin >> amount;
			break;
		default:
			break;
		}
		system("cls");
	}
	return 0;
}

