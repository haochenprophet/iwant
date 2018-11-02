#ifndef SUB_ASSIGN_H
#define SUB_ASSIGN_H

#include "../operator.h"

namespace n_sub_assign {
	class Csub_assign :public Coperator
	{
	public:
		Csub_assign();
		~Csub_assign();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sub_assign;

#endif
