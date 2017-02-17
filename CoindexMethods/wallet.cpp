#include "wallet.h"
double balance(std::string address) // ������ �ܾ� ����.
{
	rpc::client c(_SERVER_IP, 18332);
	return c.call("getbalance", address).as<double>(); // getbalance �� ���� ������ double ������ ��ȯ
}

void sendfrom(std::string addressFrom, std::string addressTo, std::string amount) // From ���� To ���� amount ��ŭ ����
{
	rpc::client c(_SERVER_IP, 18332);
	c.call("sendfrom", addressFrom, addressTo, amount);
}
std::string get_connection_state(void)
{
	rpc::client c(_SERVER_IP, 18332);
	rpc::client::connection_state cs = c.get_connection_state();

	if (cs == rpc::client::connection_state::connected)
		return "��ȣ";
	else
		return "�ҷ�";
}