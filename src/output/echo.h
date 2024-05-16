#ifndef ECHO_H
#define ECHO_H

#include "cout.h"

namespace n_echo {
	class Cecho :public Ccout
	{
	public:
		Cecho();
		static int echo(char*);
	};

}
using namespace n_echo;

#endif
