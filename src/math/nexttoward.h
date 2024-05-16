#ifndef NEXTTOWARD_H
#define NEXTTOWARD_H

#include "object/object.h"

namespace n_nexttoward {
	class Cnexttoward :public Object
	{
	public:
		Cnexttoward();
		~Cnexttoward();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnexttoward); }
		static double nexttoward_c(double x, long double y);
		static float nexttowardf_c(float x, long double y);
		static long double nexttowardl_c(long double x, long double y);

	};
}

using namespace n_nexttoward;

#endif
