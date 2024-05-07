#ifndef EARTH_TIME_H
#define EARTH_TIME_H

#include "../object.h"

namespace n_earth_time {
	class Cearth_time :public Object
	{
	public:
		Cearth_time();
		~Cearth_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_time); }
	};
}

using namespace n_earth_time;

#endif
