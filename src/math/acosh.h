#ifndef ACOSH_H
#define ACOSH_H

#include "object/object.h"

namespace n_acosh {
	class Cacosh :public Object
	{
	public:
		Cacosh();
		~Cacosh();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cacosh); }
		static double acosh_c(double x); 
		static float acoshf_c(float x);
		static long double acoshl_c(long double x);

	};
}

using namespace n_acosh;

#endif
