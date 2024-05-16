#ifndef FMAX_H
#define FMAX_H

#include "object/object.h"

namespace n_fmax {
	class Cfmax :public Object
	{
	public:
		Cfmax();
		~Cfmax();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfmax); }
		static double fmax_c(double x, double y);
		static float fmaxf_c(float x, float y);
		static long double fmaxl_c(long double x, long double y);

	};
}

using namespace n_fmax;

#endif
