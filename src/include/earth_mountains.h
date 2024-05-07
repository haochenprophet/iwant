#ifndef EARTH_MOUNTAINS_H
#define EARTH_MOUNTAINS_H

#include "../object.h"

namespace n_earth_mountains {
	class Cearth_mountains :public Object
	{
	public:
		Cearth_mountains();
		~Cearth_mountains();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_mountains); }
	};
}

using namespace n_earth_mountains;

#endif
