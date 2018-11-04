#ifndef LESS_THAN_EQUAL_H
#define LESS_THAN_EQUAL_H

#include "operator.h"

namespace n_less_than_equal {
	class Cless_than_equal :public Coperator
	{
	public:
		Cless_than_equal();
		~Cless_than_equal();
		int my_init(void *p=nullptr);
	};
}

using namespace n_less_than_equal;

#endif
