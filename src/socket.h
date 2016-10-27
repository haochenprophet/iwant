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
	};

}
using namespace n_socket;

#endif