#ifndef ABS_H
#define ABS_H

#include "../object.h"

namespace n_abs {
	class Cabs :public Object
	{
	public:
		Cabs();
		~Cabs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cabs); }
		static int abs_c(int n);
		static double abs_c(double x);      
		static float abs_c(float x);
		static long double abs_c(long double x);
	};
}

using namespace n_abs;

#endif
