#ifndef NEXTAFTER_H
#define NEXTAFTER_H

#include "object/object.h"

namespace n_nextafter {
	class Cnextafter :public Object
	{
	public:
		Cnextafter();
		~Cnextafter();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnextafter); }
		double nextafter_c(double x, double y);
		float nextafterf_c(float x, float y);
		long double nextafterl_c(long double x, long double y);

	};
}

using namespace n_nextafter;

#endif
