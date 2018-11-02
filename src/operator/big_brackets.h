#ifndef BIG_BRACKETS_H
#define BIG_BRACKETS_H

#include "../operator.h"

namespace n_big_brackets {
	class Cbig_brackets :public Coperator
	{
	public:
		Cbig_brackets();
		~Cbig_brackets();
		int my_init(void *p=nullptr);
	};
}

using namespace n_big_brackets;

#endif
