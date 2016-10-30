#include "socket.h"
#define SOCKET_TEST	01

Csocket::Csocket()
{
	this->sendbuf=NULL;
	this->recvbuf=NULL;
	this->s_buf_size=0;
	this->r_buf_size=0;

	this->name = "Csocket";
	this->alias = "socket";
}

Csocket::~Csocket()
{

}

SOCKET  Csocket::s_socket(int af, int type, int protocol)
{
	return  socket(af, type, protocol);
}

int Csocket::s_connect(SOCKET s,sockaddr *sockaddr, int size)
{
	return connect(s, sockaddr, size);
}

int Csocket::s_bind(SOCKET s, sockaddr *sockaddr, int size)
{
	return bind(s, sockaddr,size);
}

int Csocket::s_send(SOCKET s, const char *buf, int size, int flags)
{
	return send(s, buf, size, flags);
}

int Csocket::s_recv(SOCKET s, char *buf, int  len, int  flags)
{
	return recv(s, buf, len, flags);
}

int Csocket::s_listen(SOCKET s, int backlog)
{
	return listen(s, backlog);
}

SOCKET Csocket::s_accept(SOCKET s, sockaddr *o_addr, socklen_t * io_size)
{
	return accept(s, o_addr, io_size);
}

int Csocket::s_shutdown(SOCKET s, int how )
{
	return shutdown(s, how);
}

int Csocket::s_close(SOCKET s, int how,int run_sd )
{
	int ret=0;
	if(run_sd) ret= shutdown(s, how);
#if WINDOWS_OS
	ret=closesocket(s);
#endif
	return ret;
}

int Csocket::client(char *hostname,char *service, char *sendbuf, int* io_s_size,char *recvbuf,int * io_r_size)
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
		if(SOCKET_ERROR == connect(connect_socket,ptr->ai_addr,(int)ptr->ai_addrlen))
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
	if(sendbuf&&*io_s_size)
	{

		i_ret = send(connect_socket, sendbuf,*io_s_size, 0);
		if (i_ret == SOCKET_ERROR)
		{
			cout<<"error:send failed with error.\n";
			this->s_close(connect_socket);
			return 1;
		}

		cout<<"Bytes Sent:"<<i_ret<<endl;//test
		*io_s_size=i_ret;

		// shutdown the connection since no more data will be sent
		if(SOCKET_ERROR==shutdown(connect_socket, SD_SEND))
		{
	#if WINDOWS_OS
			closesocket(connect_socket);
	#endif
			return 1;
		}
	}
	// Receive until the peer closes the connection
	if(!recvbuf||*io_r_size==0)	return 0;

	do{
		i_ret = recv(connect_socket, recvbuf,*io_r_size, 0);
		if(i_ret > 0)
			cout<<"Bytes received:"<<i_ret<<endl;
		else if(i_ret == 0 )
			cout<<"Connection closed\n";
		else
			cout<<"recv failed with error: %d\n";
	}while(i_ret>0);

	if(i_ret>0) *io_r_size=i_ret;

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
