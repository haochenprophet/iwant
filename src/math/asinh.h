#ifndef ASINH_H
#define ASINH_H

#include "object/object.h"

namespace n_asinh {
	class Casinh :public Object
	{
	public:
		Casinh();
		~Casinh();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Casinh); }
		static double asinh_c(double x);
		static float asinhf_c(float x);
		static long double asinhl_c(long double x);
	};
}

using namespace n_asinh;

#endif
