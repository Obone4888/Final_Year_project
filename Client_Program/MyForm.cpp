#include "MyForm.h"

#include <iostream>
#include <string>
#include <WS2tcpip.h>


#pragma comment (lib, "ws2_32.lib")

using namespace ClientToolGUI;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(/*array<String^>^ args*/)
{
	
	MyForm^ obj = gcnew MyForm();
	obj->ShowDialog();

};