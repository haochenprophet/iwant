#ifndef REMAINDER_H
#define REMAINDER_H

#include "object/object.h"

namespace n_remainder {
	class Cremainder :public Object
	{
	public:
		Cremainder();
		~Cremainder();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cremainder); }
		double remainder_c(double numer, double denom);
		float remainderf_c(float numer, float denom);
		long double remainderl_c(long double numer, long double denom);

	};
}

using namespace n_remainder;

#endif
