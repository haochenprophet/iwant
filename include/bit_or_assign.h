#ifndef BIT_OR_ASSIGN_H
#define BIT_OR_ASSIGN_H

#include "operator.h"

namespace n_bit_or_assign {
	class Cbit_or_assign :public Coperator
	{
	public:
		Cbit_or_assign();
		~Cbit_or_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bit_or_assign;

#endif
