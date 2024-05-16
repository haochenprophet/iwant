#ifndef MARS_TEMPERATURE_H
#define MARS_TEMPERATURE_H

#include "object/object.h"

namespace n_mars_temperature {
	class Cmars_temperature :public Object
	{
	public:
		Cmars_temperature();
		~Cmars_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_temperature); }
	};
}

using namespace n_mars_temperature;

#endif
