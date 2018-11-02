#ifndef MOLD_ASSIGN_H
#define MOLD_ASSIGN_H

#include "../operator.h"

namespace n_mold_assign {
	class Cmold_assign :public Coperator
	{
	public:
		Cmold_assign();
		~Cmold_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_mold_assign;

#endif
