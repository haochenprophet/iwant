#include "os.h"

#if WINDOWS_OS
#pragma comment(lib, "ws2_32.lib")
#endif

Cos::Cos()
{
	this->name = "Cos";
	this->alias = "os";
#if WINDOWS_OS
	this->init_winsock();
#endif
}

Cos::~Cos()
{
#if WINDOWS_OS
	this->exit_winsock();
#endif
}

#if WINDOWS_OS
int win_wsa_startup = 0;
int Cos::init_winsock() //!=0 init fail
{
	WSADATA wsaData;
	if (win_wsa_startup) return 0; //init once

	if (WSAStartup(MAKEWORD(2, 2), &wsaData))
	{
		std::cout<<"error:Cos::init_winsock() WSAStartup fialed.\n";
		return -1;//init fail
	}	
	//std::cout << "Cos::init_winsock() WSAStartup start.\n";//test ok
	win_wsa_startup = 1;
	return 0;
}

void Cos::exit_winsock()
{
	if(win_wsa_startup) WSACleanup();
}
#endif//WINDOWS_OS