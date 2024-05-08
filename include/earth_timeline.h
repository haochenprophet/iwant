#ifndef EARTH_TIMELINE_H
#define EARTH_TIMELINE_H

#include "../object.h"

namespace n_earth_timeline {
	class Cearth_timeline :public Object
	{
	public:
		Cearth_timeline();
		~Cearth_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_timeline); }
	};
}

using namespace n_earth_timeline;

#endif
