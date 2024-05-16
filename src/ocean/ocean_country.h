#ifndef OCEAN_COUNTRY_H
#define OCEAN_COUNTRY_H

#include "object/object.h"

namespace n_ocean_country {
	class Cocean_country :public Object
	{
	public:
		Cocean_country();
		~Cocean_country();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_country); }
	};
}

using namespace n_ocean_country;

#endif
