#ifndef FLOOR_H
#define FLOOR_H

#include "object/object.h"

namespace n_floor {
	class Cfloor :public Object
	{
	public:
		Cfloor();
		~Cfloor();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfloor); }
		static double floor_c(double x);

	};
}

using namespace n_floor;

#endif
