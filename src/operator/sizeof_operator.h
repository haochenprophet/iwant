#ifndef SIZEOF_OPERATOR_H
#define SIZEOF_OPERATOR_H

#include "../operator.h"

namespace n_sizeof_operator {
	class Csizeof_operator :public Coperator
	{
	public:
		Csizeof_operator();
		~Csizeof_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sizeof_operator;

#endif
