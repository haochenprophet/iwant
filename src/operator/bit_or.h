#ifndef BIT_OR_H
#define BIT_OR_H

#include "../operator.h"

namespace n_bit_or {
	class Cbit_or :public Coperator
	{
	public:
		Cbit_or();
		~Cbit_or();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bit_or;

#endif
