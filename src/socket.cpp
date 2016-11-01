#include "socket.h"
#define SOCKET_TEST	01

Csocket::Csocket()
{
	this->name = "Csocket";
	this->alias = "socket";
	this->sendbuf = NULL;
	this->recvbuf = NULL;
	this->s_buf_size=this->allot(BUF_SIZE,(void **)&this->sendbuf);
	this->r_buf_size=this->allot(BUF_SIZE, (void **)&this->recvbuf);
	this->sendbuf[0] = 0;
	this->recvbuf[0] = 0;
}

Csocket::~Csocket()
{
	this->delete_allot((void **)&this->sendbuf);
	this->delete_allot((void **)&this->recvbuf);
}

SOCKET Csocket::s_socket(int af, int type, int protocol)
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
#if LINUX_OS
	ret= shutdown(s, how);
#endif

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
			this->s_close(connect_socket);
			return 1;
		}
	}

	// Receive until the peer closes the connection
	if(recvbuf&&*io_r_size)
	{
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
	}

	this->s_close(connect_socket);
	return 0;
}

int Csocket::server(char *service, char *sendbuf, int* io_s_size,char *recvbuf,int * io_r_size)
{
	int i_ret;
	SOCKET listen_socket = INVALID_SOCKET;
	SOCKET client_socket = INVALID_SOCKET;
	struct addrinfo *result = NULL;
	struct addrinfo hints;
	int send_result;

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	// Resolve the server address and port
	i_ret = getaddrinfo(NULL, service, &hints, &result);
	if (i_ret != 0 ) 
	{
		cout<<"error:getaddrinfo failed with error:"<<i_ret<<endl;
		return 1;
	}

	// Create a SOCKET for connecting to server
	listen_socket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if(listen_socket == INVALID_SOCKET) 
	{
		cout<<"error:socket failed with error.\n";
		freeaddrinfo(result);
		return 1;
	}

	// Setup the TCP listening socket
	i_ret = bind( listen_socket, result->ai_addr, (int)result->ai_addrlen);
	if (i_ret == SOCKET_ERROR) 
	{
		cout<<"error:bind failed with error.\n";
		freeaddrinfo(result);
		this->s_close(listen_socket);
		return 1;
	}

	freeaddrinfo(result);

	i_ret = listen(listen_socket, SOMAXCONN);
	if (i_ret == SOCKET_ERROR) 
	{
		cout<<"error:listen failed with error.\n";
		this->s_close(listen_socket);
		return 1;
	}

	// Accept a client socket
	client_socket = accept(listen_socket, NULL, NULL);
	if (client_socket == INVALID_SOCKET) 
	{
		cout<<"error:accept failed with error.\n";
		this->s_close(listen_socket);
		return 1;
	}

	// No longer need server socket
	this->s_close(listen_socket);

	if(recvbuf&&*io_r_size>0)
	{
		// Receive until the peer shuts down the connection
		do 
		{
			i_ret = recv(client_socket, recvbuf, *io_r_size, 0);
			if (i_ret > 0)
			{
				cout<<"Bytes received:"<<i_ret<<endl;
				*io_r_size = i_ret;
			}
			else if (i_ret == 0)
				cout<<"Connection closing...\n";
			else
			{
				cout<<"error:recv failed with error.\n";
				this->s_close(client_socket);
				return 1;
			}

		} while (i_ret > 0);
	}

	if (sendbuf&&*io_s_size)
	{
		send_result = send(client_socket, sendbuf, *io_s_size, 0);
		if (send_result == SOCKET_ERROR)
		{
			cout << "error:send failed with error.\n";
			this->s_close(client_socket);
			return 1;
		}
		cout << "Bytes sent:" << send_result << endl;
		*io_s_size = send_result;
	}

	// shutdown the connection since we're done
	i_ret = shutdown(client_socket, SD_SEND);
	if (i_ret == SOCKET_ERROR) 
	{
		cout<<"error:shutdown failed with error.\n";
		this->s_close(client_socket);
		return 1;
	}

	// cleanup
	this->s_close(client_socket);

	return 0;
}

#if SOCKET_TEST
#include "all_h_include.h"
int main()
{
	Csocket s;
	cout << "Csocket main !\n";
	
	Ccout o;
	o.func((void *)"Ccout test !");

	Cecho e;
	e.func((void *)"Cecho test!");

	return 0;
}
#endif
