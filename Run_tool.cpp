#include <iostream>
#include <Windows.h>
#include <shellapi.h>
int main()
{
    ShellExecuteA(GetDesktopWindow(), "open", "Server_Program\\Server_Tool.exe", NULL, NULL, SW_SHOW);
    Sleep(1500);
    ShellExecuteA(GetDesktopWindow(), "open", "Client_Program\\Client_Tool_GUI.exe", NULL, NULL, SW_SHOW); 
}

