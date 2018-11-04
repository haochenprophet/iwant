#ifndef DECREASE_PREFIX_H
#define DECREASE_PREFIX_H

#include "operator.h"

namespace n_decrease_prefix {
	class Cdecrease_prefix :public Coperator
	{
	public:
		Cdecrease_prefix();
		~Cdecrease_prefix();
		int my_init(void *p=nullptr);
	};
}

using namespace n_decrease_prefix;

#endif
