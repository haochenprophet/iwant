#ifndef FMIN_H
#define FMIN_H

#include "../object.h"

namespace n_fmin {
	class Cfmin :public Object
	{
	public:
		Cfmin();
		~Cfmin();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfmin); }
		static double fmin_c(double x, double y);
		static float fminf_c(float x, float y);
		static long double fminl_c(long double x, long double y);

	};
}

using namespace n_fmin;

#endif
