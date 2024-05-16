#ifndef EARTH_COUNTRY_H
#define EARTH_COUNTRY_H

#include "object/object.h"

namespace n_earth_country {
	class Cearth_country :public Object
	{
	public:
		Cearth_country();
		~Cearth_country();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_country); }
	};
}

using namespace n_earth_country;

#endif
