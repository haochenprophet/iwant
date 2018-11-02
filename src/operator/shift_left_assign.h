#ifndef SHIFT_LEFT_ASSIGN_H
#define SHIFT_LEFT_ASSIGN_H

#include "../operator.h"

namespace n_shift_left_assign {
	class Cshift_left_assign :public Coperator
	{
	public:
		Cshift_left_assign();
		~Cshift_left_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_shift_left_assign;

#endif
