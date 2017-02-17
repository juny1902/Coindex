#pragma once
#include "stdafx.h"

const string _SERVER_IP = "localhost"; // 서버 아이피 지정
double balance(std::string address); // 현재의 잔액 얻음
void sendfrom(std::string addressFrom, std::string addressTo, std::string amount); // From 에서 To 로 송금
std::string get_connection_state(void); // 연결상태 확인