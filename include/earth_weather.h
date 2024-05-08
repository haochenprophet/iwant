#ifndef EARTH_WEATHER_H
#define EARTH_WEATHER_H

#include "../object.h"

namespace n_earth_weather {
	class Cearth_weather :public Object
	{
	public:
		Cearth_weather();
		~Cearth_weather();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_weather); }
	};
}

using namespace n_earth_weather;

#endif
