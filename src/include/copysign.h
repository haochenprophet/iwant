#ifndef COPYSIGN_H
#define COPYSIGN_H

#include "../object.h"

namespace n_copysign {
	class Ccopysign :public Object
	{
	public:
		Ccopysign();
		~Ccopysign();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccopysign); }
		static double copysign_c(double x, double y);
		static float copysignf_c(float x, float y);
		static long double copysignl_c(long double x, long double y);

	};
}

using namespace n_copysign;

#endif
