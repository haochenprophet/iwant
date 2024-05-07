#ifndef AT_OPERATOR_H
#define AT_OPERATOR_H

#include "operator.h"

namespace n_at_operator {
	class Cat_operator :public Coperator
	{
	public:
		Cat_operator();
		~Cat_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_at_operator;

#endif
