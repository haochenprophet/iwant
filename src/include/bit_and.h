#ifndef BIT_AND_H
#define BIT_AND_H

#include "operator.h"

namespace n_bit_and {
	class Cbit_and :public Coperator
	{
	public:
		Cbit_and();
		~Cbit_and();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bit_and;

#endif
