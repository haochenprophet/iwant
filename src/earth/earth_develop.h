#ifndef EARTH_DEVELOP_H
#define EARTH_DEVELOP_H

#include "object/object.h"

namespace n_earth_develop {
	class Cearth_develop :public Object
	{
	public:
		Cearth_develop();
		~Cearth_develop();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_develop); }
	};
}

using namespace n_earth_develop;

#endif
