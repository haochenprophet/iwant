#include "socket.h"
#define SOCKET_TEST	01

Csocket::Csocket()
{
	this->name = "Csocket";
	this->alias = "socket";
}

Csocket::~Csocket()
{

}

#if SOCKET_TEST
int main()
{
	Csocket s;
	cout << "Csocket main !\n";

	return 0;
}
#endif