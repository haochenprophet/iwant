#ifndef EARTH_RACE_H
#define EARTH_RACE_H

#include "object/object.h"

namespace n_earth_race {
	class Cearth_race :public Object
	{
	public:
		Cearth_race();
		~Cearth_race();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_race); }
	};
}

using namespace n_earth_race;

#endif
