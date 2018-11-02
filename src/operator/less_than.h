#ifndef LESS_THAN_H
#define LESS_THAN_H

#include "../operator.h"

namespace n_less_than {
	class Cless_than :public Coperator
	{
	public:
		Cless_than();
		~Cless_than();
		int my_init(void *p=nullptr);
	};
}

using namespace n_less_than;

#endif
