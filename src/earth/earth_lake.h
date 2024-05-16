#ifndef EARTH_LAKE_H
#define EARTH_LAKE_H

#include "object/object.h"

namespace n_earth_lake {
	class Cearth_lake :public Object
	{
	public:
		Cearth_lake();
		~Cearth_lake();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_lake); }
	};
}

using namespace n_earth_lake;

#endif
