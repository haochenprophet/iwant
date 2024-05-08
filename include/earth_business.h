#ifndef EARTH_BUSINESS_H
#define EARTH_BUSINESS_H

#include "../object.h"

namespace n_earth_business {
	class Cearth_business :public Object
	{
	public:
		Cearth_business();
		~Cearth_business();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_business); }
	};
}

using namespace n_earth_business;

#endif
