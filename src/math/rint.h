#ifndef RINT_H
#define RINT_H

#include "object/object.h"

namespace n_rint {
	class Crint :public Object
	{
	public:
		Crint();
		~Crint();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Crint); }
		static double rint_c(double x);
		static float rintf_c(float x);
		static long double rintl_c(long double x);

	};
}

using namespace n_rint;

#endif
