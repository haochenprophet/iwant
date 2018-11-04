#ifndef SHIFT_LEFT_H
#define SHIFT_LEFT_H

#include "operator.h"

namespace n_shift_left {
	class Cshift_left :public Coperator
	{
	public:
		Cshift_left();
		~Cshift_left();
		int my_init(void *p=nullptr);
	};
}

using namespace n_shift_left;

#endif
