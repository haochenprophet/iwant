#ifndef BIT_AND_ASSIGN_H
#define BIT_AND_ASSIGN_H

#include "operator.h"

namespace n_bit_and_assign {
	class Cbit_and_assign :public Coperator
	{
	public:
		Cbit_and_assign();
		~Cbit_and_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bit_and_assign;

#endif
