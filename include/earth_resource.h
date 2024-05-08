#ifndef EARTH_RESOURCE_H
#define EARTH_RESOURCE_H

#include "../object.h"

namespace n_earth_resource {
	class Cearth_resource :public Object
	{
	public:
		Cearth_resource();
		~Cearth_resource();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_resource); }
	};
}

using namespace n_earth_resource;

#endif
