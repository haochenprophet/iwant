#ifndef FMA_H
#define FMA_H

#include "object/object.h"

namespace n_fma {
	class Cfma :public Object
	{
	public:
		Cfma();
		~Cfma();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfma); }
		static double fma_c(double x, double y, double z);
		static float fmaf_c(float x, float y, float z);
		static long double fmal_c(long double x, long double y, long double z);

	};
}

using namespace n_fma;

#endif
