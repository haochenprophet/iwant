#ifndef SCOPE_OPERATOR_H
#define SCOPE_OPERATOR_H

#include "operator.h"

namespace n_scope_operator {
	class Cscope_operator :public Coperator
	{
	public:
		Cscope_operator();
		~Cscope_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_scope_operator;

#endif
