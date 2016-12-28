#ifndef NOT_EQ_H
#define NOT_EQ_H

#include "object.h"

namespace n_not_eq {
	class Cnot_eq :public Object
	{
	public:
		Cnot_eq();
		int my_init(void *p=nullptr);
	};
}

using namespace n_not_eq;

#endif
