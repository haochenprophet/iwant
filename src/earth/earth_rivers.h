#ifndef EARTH_RIVERS_H
#define EARTH_RIVERS_H

#include "object/object.h"

namespace n_earth_rivers {
	class Cearth_rivers :public Object
	{
	public:
		Cearth_rivers();
		~Cearth_rivers();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_rivers); }
	};
}

using namespace n_earth_rivers;

#endif
