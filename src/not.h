#ifndef NOT_H
#define NOT_H

#include "object.h"

namespace n_not {
	class Cnot :public Object
	{
	public:
		Cnot();
		int my_init(void *p=NULL);
	};
}

using namespace n_not;

#endif
