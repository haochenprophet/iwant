#ifndef NOT_H
#define NOT_H

#include "object/object.h"

namespace n_not {
	class Cnot :public Object
	{
	public:
		Cnot();
		int my_init(void *p=nullptr);
	};
}

using namespace n_not;

#endif
