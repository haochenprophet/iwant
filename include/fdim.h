#ifndef FDIM_H
#define FDIM_H

#include "../object.h"

namespace n_fdim {
	class Cfdim :public Object
	{
	public:
		Cfdim();
		~Cfdim();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfdim); }
		static double fdim_c(double x, double y);
		static float fdimf_c(float x, float y);
		static long double fdiml_c(long double x, long double y);

	};
}

using namespace n_fdim;

#endif
