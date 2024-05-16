#ifndef EARTH_ECONOMIC_H
#define EARTH_ECONOMIC_H

#include "object/object.h"

namespace n_earth_economic {
	class Cearth_economic :public Object
	{
	public:
		Cearth_economic();
		~Cearth_economic();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_economic); }
	};
}

using namespace n_earth_economic;

#endif
