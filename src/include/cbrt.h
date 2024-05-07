#ifndef CBRT_H
#define CBRT_H

#include "../object.h"

namespace n_cbrt {
	class Ccbrt :public Object
	{
	public:
		Ccbrt();
		~Ccbrt();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccbrt); }
		static double cbrt_c(double x);
		static float cbrtf_c(float x);
		static long double cbrtl_c(long double x);

	};
}

using namespace n_cbrt;

#endif
