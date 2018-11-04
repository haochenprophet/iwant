#ifndef MULTIPLY_ASSIGN_H
#define MULTIPLY_ASSIGN_H

#include "operator.h"

namespace n_multiply_assign {
	class Cmultiply_assign :public Coperator
	{
	public:
		Cmultiply_assign();
		~Cmultiply_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_multiply_assign;

#endif
