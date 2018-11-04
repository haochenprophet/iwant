#ifndef ADD_ASSIGN_H
#define ADD_ASSIGN_H

#include "operator.h"

namespace n_add_assign {
	class Cadd_assign :public Coperator
	{
	public:
		Cadd_assign();
		~Cadd_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_add_assign;

#endif
