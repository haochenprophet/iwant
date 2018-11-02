#ifndef DOLLAR_OPERATOR_H
#define DOLLAR_OPERATOR_H

#include "../operator.h"

namespace n_dollar_operator {
	class Cdollar_operator :public Coperator
	{
	public:
		Cdollar_operator();
		~Cdollar_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_dollar_operator;

#endif
