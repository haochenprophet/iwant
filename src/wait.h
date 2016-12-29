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
	};
}

using namespace n_wait;

#endif
