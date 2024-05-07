#ifndef LGAMMA_H
#define LGAMMA_H

#include "../object.h"

namespace n_lgamma {
	class Clgamma :public Object
	{
	public:
		Clgamma();
		~Clgamma();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clgamma); }
		static double lgamma_c(double x);
		static float lgammaf_c(float x);
		static long double lgammal_c(long double x);

	};
}

using namespace n_lgamma;

#endif
