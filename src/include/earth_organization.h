#ifndef EARTH_ORGANIZATION_H
#define EARTH_ORGANIZATION_H

#include "../object.h"

namespace n_earth_organization {
	class Cearth_organization :public Object
	{
	public:
		Cearth_organization();
		~Cearth_organization();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_organization); }
	};
}

using namespace n_earth_organization;

#endif
