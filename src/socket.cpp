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

int Csocket::s_close(int sock, int how,int run_sd )
{
	int ret=0;
	if(run_sd) ret= shutdown(sock, how);
#if WINDOWS_OS
	ret=closesocket(sock);
#endif
	return ret;
}

int Csocket::client(const char *hostname, const char *service,char *sendbuf, int size)
{
	struct addrinfo hints, *result = NULL, *ptr = NULL;
	SOCKET connect_socket = INVALID_SOCKET;
	int i_ret;
	memset(&hints, 0, sizeof(hints));

	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	if (getaddrinfo(hostname, service, &hints, &result))
	{
		cout << "error:if (getaddrinfo(hostname, service, &hints, &result)\n";
		return -1;
	}

	// Attempt to connect to an address until one succeeds
	for (ptr = result; ptr != NULL;ptr = ptr->ai_next)
	{
		// Create a SOCKET for connecting to server
		connect_socket = socket(ptr->ai_family, ptr->ai_socktype,ptr->ai_protocol);
		if (connect_socket == INVALID_SOCKET) 
		{
			cout << "error:connect_socket == INVALID_SOCKET\n";
			return 1;
		}

		// Connect to server.
		i_ret = connect(connect_socket, ptr->ai_addr, (int)ptr->ai_addrlen);
		if (i_ret == SOCKET_ERROR)
		{
			this->s_close(connect_socket);
			connect_socket = INVALID_SOCKET;
			continue;
		}
		break;
	}

	freeaddrinfo(result);

	if (connect_socket == INVALID_SOCKET)
	{
		cout<<"error:Unable to connect to server!\n";
		return 1;
	}

	// Send an initial buffer
	i_ret = send(connect_socket, sendbuf, size, 0);
	if (i_ret == SOCKET_ERROR)
	{
		cout<<"error:send failed with error.\n";
		this->s_close(connect_socket);
		return 1;
	}

	printf("Bytes Sent: %ld\n", i_ret);

	return 0;
}

#if SOCKET_TEST
int main()
{
	Csocket s;
	cout << "Csocket main !\n";

	return 0;
}
#endif
