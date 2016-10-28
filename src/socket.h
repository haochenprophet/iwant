#ifndef SOCKET_H
#define SOCKET_H

#include "object.h"
#include "os.h"

namespace n_socket{
	class Csocket:public Cos
	{
	public:
		Csocket();
		~Csocket();
		int  socket( int af,int type,int protocol);
	};

}
using namespace n_socket;

#endif