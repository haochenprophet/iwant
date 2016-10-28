#ifndef SOCKET_H
#define SOCKET_H

#include "object.h"
#include "os.h"

#if WINDOWS_OS
typedef int socklen_t;
#endif

namespace n_socket{
	class Csocket:public Cos
	{
	public:
		Csocket();
		~Csocket();
		int s_socket( int af,int type,int protocol=0);
		int s_connect(int sock, sockaddr *sockaddr, int size= sizeof(struct sockaddr));
		int s_bind(int sock, sockaddr *sockaddr, int size= sizeof(struct sockaddr));
		int s_send(int sock,const char *buf,  int size, int flags= 0);
		int s_recv(int sock,char *buf,int  len,int  flags);
		int s_listen(int sock,int backlog= SOMAXCONN);
		int s_accept(int sock, sockaddr *o_addr= NULL, socklen_t * io_size= NULL);
		int s_shutdown(int sock, int how=2);
		int s_close(int sock, int how = 2, int run_sd = 1);
		int client(const char *hostname, const char *service, char *sendbuf, int size);
	};
}
using namespace n_socket;

#endif
