#ifndef DECREASE_SUFFIX_H
#define DECREASE_SUFFIX_H

#include "operator.h"

namespace n_decrease_suffix {
	class Cdecrease_suffix :public Coperator
	{
	public:
		Cdecrease_suffix();
		~Cdecrease_suffix();
		int my_init(void *p=nullptr);
	};
}

using namespace n_decrease_suffix;

#endif
