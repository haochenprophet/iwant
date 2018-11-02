#ifndef SHIFT_RIGHT_H
#define SHIFT_RIGHT_H

#include "../operator.h"

namespace n_shift_right {
	class Cshift_right :public Coperator
	{
	public:
		Cshift_right();
		~Cshift_right();
		int my_init(void *p=nullptr);
	};
}

using namespace n_shift_right;

#endif
