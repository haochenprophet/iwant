#ifndef NOT_EQUAL_H
#define NOT_EQUAL_H

#include "operator.h"

namespace n_not_equal {
	class Cnot_equal :public Coperator
	{
	public:
		Cnot_equal();
		~Cnot_equal();
		int my_init(void *p=nullptr);
	};
}

using namespace n_not_equal;

#endif
