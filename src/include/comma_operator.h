#ifndef COMMA_OPERATOR_H
#define COMMA_OPERATOR_H

#include "operator.h"

namespace n_comma_operator {
	class Ccomma_operator :public Coperator
	{
	public:
		Ccomma_operator();
		~Ccomma_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_comma_operator;

#endif
