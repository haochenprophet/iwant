#ifndef WAIT_H
#define WAIT_H

#include "object.h"

namespace n_wait {
	class Cwait :public Object
	{
	public:
		Cwait();
		~Cwait();
		int my_init(void *p=nullptr);
		static int    wait_key(void *p=nullptr);
		static char * wait_str(void *p=nullptr);
		static long   wait_number(void *p=nullptr);
		static double wait_float(void *p=nullptr);
	};
}

using namespace n_wait;

#endif
