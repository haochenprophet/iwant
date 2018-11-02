#ifndef DIVIDE_ASSIGN_H
#define DIVIDE_ASSIGN_H

#include "../operator.h"

namespace n_divide_assign {
	class Cdivide_assign :public Coperator
	{
	public:
		Cdivide_assign();
		~Cdivide_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_divide_assign;

#endif
