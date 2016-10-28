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

int  Csocket::s_socket(int af, int type, int protocol)
{
	return (int) socket(af, type, protocol);
}

int Csocket::s_connect(int sock,sockaddr *sockaddr, int size)
{
	return connect(sock, sockaddr, size);
}

int Csocket::s_bind(int sock, sockaddr *sockaddr, int size)
{
	return bind(sock, sockaddr,size);
}

int Csocket::s_send(int sock, const char *buf, int size, int flags)
{
	return send(sock, buf, size, flags);
}

int Csocket::s_recv(int sock, char *buf, int  len, int  flags)
{
	return recv(sock, buf, len, flags);
}

int Csocket::s_listen(int sock, int backlog)
{
	return listen(sock, backlog);
}

int Csocket::s_accept(int sock, sockaddr *o_addr, socklen_t * io_size)
{
	return (int)accept(sock, o_addr, io_size);
}

int Csocket::s_shutdown(int sock, int how )
{
	return shutdown(sock, how);
}

int Csocket::s_close(int sock, int how )
{
	int ret = 0;
	ret=shutdown(sock, how);
#if WINDOWS_OS
	ret=closesocket(sock);
#endif
	return ret;
}

#if SOCKET_TEST
int main()
{
	Csocket s;
	cout << "Csocket main !\n";

	return 0;
}
#endif
