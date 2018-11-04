#ifndef BIT_XOR_ASSIGN_H
#define BIT_XOR_ASSIGN_H

#include "operator.h"

namespace n_bit_xor_assign {
	class Cbit_xor_assign :public Coperator
	{
	public:
		Cbit_xor_assign();
		~Cbit_xor_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bit_xor_assign;

#endif
