#pragma once
#include <iostream>
#include <string>
#include "TCP_functions.h"
#include <WS2tcpip.h>

using namespace std;

class funcs
{
	public: 
		void start_conn(/*int port, string ipAdress*/);
		string send_to_server(string ret);
		
};

