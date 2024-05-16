#ifndef OCEAN_TIME_H
#define OCEAN_TIME_H

#include "object/object.h"

namespace n_ocean_time {
	class Cocean_time :public Object
	{
	public:
		Cocean_time();
		~Cocean_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_time); }
	};
}

using namespace n_ocean_time;

#endif
