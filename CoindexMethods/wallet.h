#pragma once
#include "stdafx.h"

const string _SERVER_IP = "localhost"; // ���� ������ ����
double balance(std::string address); // ������ �ܾ� ����
void sendfrom(std::string addressFrom, std::string addressTo, std::string amount); // From ���� To �� �۱�
std::string get_connection_state(void); // ������� Ȯ��