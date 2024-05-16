#ifndef ERF_H
#define ERF_H

#include "object/object.h"

namespace n_erf {
	class Cerf :public Object
	{
	public:
		Cerf();
		~Cerf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cerf); }
		static double erf_c(double x);
		static float erff_c(float x);
		static long double erfl_c(long double x);

	};
}

using namespace n_erf;

#endif
