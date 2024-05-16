#ifndef SENSOR_IMAGING_H
#define SENSOR_IMAGING_H

#include "object/object.h"

namespace n_sensor_imaging {
	class Csensor_imaging :public Object
	{
	public:
		Csensor_imaging();
		~Csensor_imaging();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_imaging); }
	};
}

using namespace n_sensor_imaging;

#endif
