#ifndef NEARBYINT_H
#define NEARBYINT_H

#include "../object.h"

namespace n_nearbyint {
	class Cnearbyint :public Object
	{
	public:
		Cnearbyint();
		~Cnearbyint();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnearbyint); }
		static double nearbyint_c(double x);
		static float nearbyintf_c(float x);
		static long double nearbyintl_c(long double x);

	};
}

using namespace n_nearbyint;

#endif
