#ifndef CONDITIONAL_OPERATOR_H
#define CONDITIONAL_OPERATOR_H

#include "../operator.h"

namespace n_conditional_operator {
	class Cconditional_operator :public Coperator
	{
	public:
		Cconditional_operator();
		~Cconditional_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_conditional_operator;

#endif
