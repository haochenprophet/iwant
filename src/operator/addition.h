#ifndef ADDITION_H
#define ADDITION_H

#include "../operator.h"

namespace n_addition {
	class Caddition :public Coperator
	{
	public:
		Caddition();
		~Caddition();
		int my_init(void *p=nullptr);
	};
}

using namespace n_addition;

#endif
