#include <iostream>
#include <string>
#include <sqlite3.h>
#include"Server_and_client.h"
#include"Firewall_and_database.h"
#include <WS2tcpip.h>
#include <tuple>
#include "winsock2.h"
#include <vector>
#pragma comment (lib, "ws2_32.lib")
using namespace std;

string query;
int fn_data::callback(void* data/*data provided in 4th argument*/, int RowNum/*num collums in row*/, char** Fields/*feilds in row*/, char** ColName/*collum names*/)
{
	
	int i;
	if (query.size() == 0)
	{
		query += (ColName, "\r\n");
	}

	for (i = 0; i < RowNum; i++) {
		query += ("%s = %s \r\n", ColName[i], Fields[i] ? Fields[i] : " ");
		query += " \r\n";
	}
	query += "\r\n";
	return 0;
}

string fn_data::SQL_Query(string userQuery)
{
	query = "";
	sqlite3* DB;
	int exit = 0;
	exit = sqlite3_open("Data.db", &DB);
	char* messaggeError;

	sqlite3_exec(DB, userQuery.c_str(), callback, NULL, NULL);
	exit = sqlite3_exec(DB, userQuery.c_str(), NULL, 0, &messaggeError);

	if (exit != SQLITE_OK)
	{
		std::cerr << "Error" << std::endl;
		sqlite3_free(messaggeError);
	}
	else
	{
		std::cout << "Requested Data" << std::endl;
	}
	sqlite3_close(DB);
	return query;
}

