#ifndef EQUAL_OPERATOR_H
#define EQUAL_OPERATOR_H

#include "operator.h"

namespace n_equal_operator {
	class Cequal_operator :public Coperator
	{
	public:
		Cequal_operator();
		~Cequal_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_equal_operator;

#endif
