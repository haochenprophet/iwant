#ifndef DEREFERENCE_OPERATOR_H
#define DEREFERENCE_OPERATOR_H

#include "../operator.h"

namespace n_dereference_operator {
	class Cdereference_operator :public Coperator
	{
	public:
		Cdereference_operator();
		~Cdereference_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_dereference_operator;

#endif
