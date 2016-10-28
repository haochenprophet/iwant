#ifndef SOCKET_H
#define SOCKET_H

#include "object.h"
#include "os.h"

#if LINUX_OS
typedef int  SOCKET;
#endif

#ifndef INVALID_SOCKET
#define INVALID_SOCKET  -1
#endif //INVALID_SOCKET

#ifndef SOCKET_ERROR
#define SOCKET_ERROR    -1
#endif // !SOCKET_ERROR

namespace n_socket{
	class Csocket:public Cos
	{
	public:
		Csocket();
		~Csocket();
		SOCKET s_socket( int af,int type,int protocol=0);
		int s_connect(SOCKET s, sockaddr *sockaddr, int size= sizeof(struct sockaddr));
		int s_bind(SOCKET s, sockaddr *sockaddr, int size= sizeof(struct sockaddr));
		int s_send(SOCKET s,const char *buf,  int size, int flags= 0);
		int s_recv(SOCKET s,char *buf,int  len,int  flags);
		int s_listen(SOCKET s,int backlog= SOMAXCONN);
		SOCKET s_accept(SOCKET s, sockaddr *o_addr= NULL, socklen_t * io_size= NULL);
		int s_shutdown(SOCKET s, int how=2);
		int s_close(SOCKET s, int how = 2, int run_sd = 1);
		int client(const char *hostname, const char *service, char *sendbuf, int size);
	};
}
using namespace n_socket;

#endif
