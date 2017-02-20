// pseudo : JSON-RPC 2.0 ���̺귯�� ����
#include <iostream>
#include <string>
using namespace std;
class Wallet {
private:
	string serverADDR; // RPC ���� �ּ� ����
	string serverPORT; // RPC ���� ��Ʈ ���� 
	string userID; // RPC ���� ID ����
	string userPW; // RPC ���� PW ����

	// ���� ������ �ޱ� ���� ����
	string walletID;
	string privateKey;
	string publicKey;

	// Ʈ����� ���� ����
	string raw_txID;
	string txID_1;
	string txID_2;
	bool isSigned;



public:
	Wallet(string ADDR, string PORT, string ID, string PW) : serverADDR(ADDR),serverPORT(PORT),userID(ID),userPW(PW) // �Է¹��� ������ ��� �ʱ�ȭ
	{
		// �ּ�,��Ʈ,ID,PW �� �̿��Ͽ� RPC ���� �õ�
		if (true) // -> ���� : �Է¹��� ���� Ŭ���� ���� ������ ����
		{	
			
		}
		else // -> ���� : ���α׷� ����
		{
			
		}
	}
	int sendTransaction(string walletTo, double amount) // ��巹��, �ݾ��� ���� Ʈ����� ��û, �׸��� ���ο��� (confirmation) ��ȸ
	{
		/* <����>
		Step 1. // listunspent ���� �������� ���� ���� ��ȸ
			// walletTo �� ���� amount �� �˸��� txid �� ã�Ƴ� 


		Step 2. // ���ο� rawtransaction ����
			
			createrawtransaction 
			'[{
				"txid" : "<txid_of_selected_block>", 
				"vout" : <vout>
			}]'
			'{"walletTo : amount", "walletID : <amount_change>"}'
			
			-> rawtransaction �� ����

		Step 3. // rawTransaction �� ����

			walletpassphrase "������й�ȣ" "�ҿ�ð�(s)"
			signrawtransaction "rawtransaction"
		
		Step 4. // rawtransaction �� ���� ���ο� txID ����.
		
			sendrawtransaction "rawtransaction"

		Step 5. // gettransaction �� ���� ���ο� txID ��ȸ
			
			��ȸ�� ���� confirmation�� ���� ��ȸ�� �� ����.


		*/
	}

	void sendCoin(string walletID, double amount)
	{
		// walletID �� amount ��ŭ ������ RPC ����. (sendtoaddress ���)
		//
	}

	void sendFrom(string walletFrom, string walletTo, double amount)
	{
		// walletFrom ���� walletTo �� amount ��ŭ ������ RPC ����. (sendfromaddress ���)
	}
	




	~Wallet() { // �ν��Ͻ��� �Ҹ�ɶ�
		cout << "������ ����Ǿ����ϴ�." << endl; 
	}







};