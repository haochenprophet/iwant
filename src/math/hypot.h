#ifndef HYPOT_H
#define HYPOT_H

#include "object/object.h"

namespace n_hypot {
	class Chypot :public Object
	{
	public:
		Chypot();
		~Chypot();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Chypot); }
		static double hypot_c(double x, double y);
		static float hypotf_c(float x, float y);
		static long double hypotl_c(long double x, long double y);

	};
}

using namespace n_hypot;

#endif
