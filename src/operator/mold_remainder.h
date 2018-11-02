#ifndef MOLD_REMAINDER_H
#define MOLD_REMAINDER_H

#include "../operator.h"

namespace n_mold_remainder {
	class Cmold_remainder :public Coperator
	{
	public:
		Cmold_remainder();
		~Cmold_remainder();
		int my_init(void *p=nullptr);
	};
}

using namespace n_mold_remainder;

#endif
