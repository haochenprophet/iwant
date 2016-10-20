#ifndef MAIN_H
#define MAIN_H

#include "object.h"
#include "iwant.h"
#include "net.h"
#include "object_home.h"
#include "socket.h"
#include "task.h"
#include "url.h"

namespace n_main {
	class Cmain :public Object
	{
	public:
		Cmain();
	};

}
using namespace n_main;

#endif