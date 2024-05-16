#ifndef EXP_H
#define EXP_H

#include "object/object.h"

namespace n_exp {
	class Cexp :public Object
	{
	public:
		Cexp();
		~Cexp();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cexp); }
		static double exp_c(double x);
	};
}

using namespace n_exp;

#endif
