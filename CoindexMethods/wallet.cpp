#include "wallet.h"
double balance(std::string address) // 현재의 잔액 얻음.
{
	rpc::client c(_SERVER_IP, 18332);
	return c.call("getbalance", address).as<double>(); // getbalance 에 대한 응답을 double 형으로 반환
}

void sendfrom(std::string addressFrom, std::string addressTo, std::string amount) // From 에서 To 에게 amount 만큼 전달
{
	rpc::client c(_SERVER_IP, 18332);
	c.call("sendfrom", addressFrom, addressTo, amount);
}
std::string get_connection_state(void)
{
	rpc::client c(_SERVER_IP, 18332);
	rpc::client::connection_state cs = c.get_connection_state();

	if (cs == rpc::client::connection_state::connected)
		return "양호";
	else
		return "불량";
}