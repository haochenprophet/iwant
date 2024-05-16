#ifndef EARTH_TECHNOLOGY_H
#define EARTH_TECHNOLOGY_H

#include "object/object.h"

namespace n_earth_technology {
	class Cearth_technology :public Object
	{
	public:
		Cearth_technology();
		~Cearth_technology();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_technology); }
	};
}

using namespace n_earth_technology;

#endif
