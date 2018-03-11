#ifndef SOCKET_H
#define SOCKET_H

#include "object.h"
#include "os.h"

#if LINUX_OS
typedef int  SOCKET;
#endif

#if WINDOWS_OS
typedef int socklen_t;
#endif

#ifndef INVALID_SOCKET
#define INVALID_SOCKET  -1
#endif //INVALID_SOCKET

#ifndef SOCKET_ERROR
#define SOCKET_ERROR    -1
#endif // !SOCKET_ERROR

#ifndef SD_RECEIVE
#define SD_RECEIVE	0	//Shutdown receive operations.
#endif

#ifndef SD_SEND
#define SD_SEND 1	//Shutdown send operations.
#endif

#ifndef SD_BOTH
#define SD_BOTH 2	//Shutdown both send and receive operations.
#endif

#define BUF_SIZE 0x1000 //default buf size
#define DEFAULT_PORT "66666"
namespace n_socket{

	class Csocket:public Cos
	{
	private:
		int s_buf_size;//sendbuf size
		int r_buf_size;//recvbuf size
	public:
		char *hostname;
		char *service;
		char *sendbuf;
		char *recvbuf;
		int io_s_size;//input /output send size
		int io_r_size;//input /output recv size
	public:
		Csocket();
		~Csocket();
		SOCKET s_socket( int af,int type,int protocol=0);
		int s_connect(SOCKET s, sockaddr *sockaddr, int size= sizeof(struct sockaddr));
		int s_bind(SOCKET s, sockaddr *sockaddr, int size= sizeof(struct sockaddr));
		int s_send(SOCKET s,const char *buf,  int size, int flags= 0);
		int s_recv(SOCKET s,char *buf,int  len,int  flags);
		int s_listen(SOCKET s,int backlog= SOMAXCONN);
		SOCKET s_accept(SOCKET s, sockaddr *o_addr= nullptr, socklen_t * io_size= nullptr);
		int s_shutdown(SOCKET s, int how=2);
		int s_close(SOCKET s, int how = 2, int run_sd = 1);
		int client(char *hostname,char *service, char *sendbuf, int* io_s_size,char *recvbuf,int * io_r_size);
		int client();
		int server(char *service, char *sendbuf, int* io_s_size,char *recvbuf,int * io_r_size);
		int server();
		void display();
	};
}
using namespace n_socket;

#endif
