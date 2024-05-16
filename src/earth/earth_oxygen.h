#ifndef EARTH_OXYGEN_H
#define EARTH_OXYGEN_H

#include "object/object.h"

namespace n_earth_oxygen {
	class Cearth_oxygen :public Object
	{
	public:
		Cearth_oxygen();
		~Cearth_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_oxygen); }
	};
}

using namespace n_earth_oxygen;

#endif
