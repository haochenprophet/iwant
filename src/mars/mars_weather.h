#ifndef MARS_WEATHER_H
#define MARS_WEATHER_H

#include "object/object.h"

namespace n_mars_weather {
	class Cmars_weather :public Object
	{
	public:
		Cmars_weather();
		~Cmars_weather();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_weather); }
	};
}

using namespace n_mars_weather;

#endif
