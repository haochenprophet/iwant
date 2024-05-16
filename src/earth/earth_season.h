#ifndef EARTH_SEASON_H
#define EARTH_SEASON_H

#include "object/object.h"

namespace n_earth_season {
	class Cearth_season :public Object
	{
	public:
		Cearth_season();
		~Cearth_season();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_season); }
	};
}

using namespace n_earth_season;

#endif
