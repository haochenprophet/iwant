#ifndef SENSOR_BRIGHTNESS_H
#define SENSOR_BRIGHTNESS_H

#include "object/object.h"

namespace n_sensor_brightness {
	class Csensor_brightness :public Object
	{
	public:
		Csensor_brightness();
		~Csensor_brightness();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_brightness); }
	};
}

using namespace n_sensor_brightness;

#endif
