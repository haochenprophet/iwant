#ifndef BIT_XOR_H
#define BIT_XOR_H

#include "operator.h"

namespace n_bit_xor {
	class Cbit_xor :public Coperator
	{
	public:
		Cbit_xor();
		~Cbit_xor();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bit_xor;

#endif
