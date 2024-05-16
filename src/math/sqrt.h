#ifndef SQRT_H
#define SQRT_H

#include "object/object.h"

namespace n_sqrt {
	class Csqrt :public Object
	{
	public:
		Csqrt();
		~Csqrt();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csqrt); }
		static double sqrt_c(double x);

	};
}

using namespace n_sqrt;

#endif
