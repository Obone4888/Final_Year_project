#include <iostream>
#include <string>
#include <WS2tcpip.h>
#include "TCP_functions.h"

#pragma comment (lib, "ws2_32.lib")
 
	using namespace std;
	using namespace System;
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	void funcs::start_conn()
	{
		int port = 54000;
		WSAData Data;

		WORD ver = MAKEWORD(2, 2);
		int wsRes = WSAStartup(ver, &Data);

		char HostName[255];
		gethostname(HostName, 255);
		struct hostent* host_entry;
		host_entry = gethostbyname(HostName);
		char* LocalIP;
		LocalIP = inet_ntoa(*(struct in_addr*)*host_entry->h_addr_list);
		string ipAddress (LocalIP);		
		
		sock = socket(AF_INET, SOCK_STREAM, 0);
		if (wsRes != 0)
		{
			cerr << "Can't start Client: Err# " << wsRes << endl;
			return;
		}
		// create sockets 
		
		if (sock == INVALID_SOCKET)
		{
			cerr << "Can't create Socket: Err#" << WSAGetLastError() << endl;
			return;
		}
		//fill in a hint struct 
		sockaddr_in hint;
		hint.sin_family = AF_INET;
		hint.sin_port = htons(port);
		inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

		//server connection
		int connRes = connect(sock, (sockaddr*)&hint, sizeof(hint));
		if (connRes == SOCKET_ERROR)
		{
			cerr << "Can't connect to Server: Err#" << WSAGetLastError() << endl;
			closesocket(sock);
			WSACleanup();
		}
	}
	string funcs::send_to_server(string ret)
	{	
		char buf[4096];
		string userInput;
			if (ret.size() > 0)
			{
				//send the text 
				int sendResult = send(sock, ret.c_str(), ret.size() + 1, 0);
				if (sendResult != SOCKET_ERROR)
				{
					for (int i = 0; i < sizeof(buf); i++) {
						buf[i] = (char)0;
					}
					ZeroMemory(buf, 4096);
					int bytesRecived = recv(sock, buf, 4096, 0);
					if (bytesRecived > 0)
					{
						string returned_output = "> " + string(buf, 0, bytesRecived);
						
						return  returned_output;
						
					};

				}
			}
			
			
			return ret;
	}
	