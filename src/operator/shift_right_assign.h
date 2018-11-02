#ifndef SHIFT_RIGHT_ASSIGN_H
#define SHIFT_RIGHT_ASSIGN_H

#include "../operator.h"

namespace n_shift_right_assign {
	class Cshift_right_assign :public Coperator
	{
	public:
		Cshift_right_assign();
		~Cshift_right_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_shift_right_assign;

#endif
