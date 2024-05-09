#ifndef SENSOR_DISPLAY_H
#define SENSOR_DISPLAY_H

#include "object.h"

namespace n_sensor_display {
	class Csensor_display :public Object
	{
	public:
		Csensor_display();
		~Csensor_display();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_display); }
	};
}

using namespace n_sensor_display;

#endif
