#ifndef LOGB_H
#define LOGB_H

#include "../object.h"

namespace n_logb {
	class Clogb :public Object
	{
	public:
		Clogb();
		~Clogb();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clogb); }
		static double logb_c(double x);
		static float logbf_c(float x);
		static long double logbl_c(long double x);
	};
}

using namespace n_logb;

#endif
