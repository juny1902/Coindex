/*

	���ǻ��� : wallet.h ���� _SERVER_IP �� �������־�� �մϴ�.

*/

#include "stdafx.h"
const string userID = "";
const string userPW = "";
const string _WalletA = "mhf6wNCZjxuG4sCzmVrXxMhtWEzQjMdL3Q"; // ���ؿ� ���� (PC Testnet)
const string _WalletB = "mn8bQCPaihn84V1DiNB17aevJAkiQYFrcz"; // ����ƾ�� ����

string amount = "0.0001"; // ���� �ݾ� �����Ұ�

int main()
{
	short ch; // ���� �б⸦ ���� �ӽ� ����
	while (1)
	{
		cout <<
			"---- ���� ���� ----" << endl <<
			"���� A : " + _WalletA << endl <<
			"���� B : " + _WalletB << endl <<
			"���� �ּ� : " + _SERVER_IP << endl <<
			"���� �ݾ� : " + amount << endl <<
			"���� ���� : " + get_connection_state() << endl <<
			"-------------------" 
		<< endl;

		cout <<
			"1. A���� �ܾ�Ȯ��" << endl <<
			"2. B���� �ܾ�Ȯ��" << endl <<
			"3. A->B" << endl <<
			"4. B->A" << endl <<
			"5. �����ݾ� ����"
		<< endl << ".......";

		cin >> ch; // ������ �Է¹���.

		switch (ch)
		{
		case 1:
			cout << "A���� �ܾ� : " << balance(_WalletA) << endl;
			break;
		case 2:
			cout << "B���� �ܾ� : " << balance(_WalletB) << endl;
			break;
		case 3:
			cout << "A���� B�� �۱�" << endl;
			break;
		case 4:
			cout << "B���� A�� �۱�" << endl;
			break;
		case 5:
			cout << "���� �ݾ� �Է� (����:BTC): ";
			cin >> amount;
			break;
		default:
			break;
		}
		system("cls");
	}
	return 0;
}

