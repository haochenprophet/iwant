#ifndef THROW_OPERATOR_H
#define THROW_OPERATOR_H

#include "operator.h"

namespace n_throw_operator {
	class Cthrow_operator :public Coperator
	{
	public:
		Cthrow_operator();
		~Cthrow_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_throw_operator;

#endif
