#ifndef MODF_H
#define MODF_H

#include "object/object.h"

namespace n_modf {
	class Cmodf :public Object
	{
	public:
		Cmodf();
		~Cmodf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmodf); }
		static double modf_c(double x, double* intpart);

	};
}

using namespace n_modf;

#endif
