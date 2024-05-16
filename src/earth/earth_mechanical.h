#ifndef EARTH_MECHANICAL_H
#define EARTH_MECHANICAL_H

#include "object/object.h"

namespace n_earth_mechanical {
	class Cearth_mechanical :public Object
	{
	public:
		Cearth_mechanical();
		~Cearth_mechanical();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_mechanical); }
	};
}

using namespace n_earth_mechanical;

#endif
