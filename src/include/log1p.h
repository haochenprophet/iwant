#ifndef LOG1P_H
#define LOG1P_H

#include "../object.h"

namespace n_log1p {
	class Clog1p :public Object
	{
	public:
		Clog1p();
		~Clog1p();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clog1p); }
		static double log1p_c(double x);
		static float log1pf_c(float x);
		static long double log1pl_c(long double x);

	};
}

using namespace n_log1p;

#endif
