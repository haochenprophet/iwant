#ifndef TRUNC_H
#define TRUNC_H

#include "object/object.h"

namespace n_trunc {
	class Ctrunc :public Object
	{
	public:
		Ctrunc();
		~Ctrunc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctrunc); }
		static double trunc_c(double x);
		static float truncf_c(float x);
		static long double truncl_c(long double x);

	};
}

using namespace n_trunc;

#endif
