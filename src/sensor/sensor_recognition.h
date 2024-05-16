#ifndef SENSOR_RECOGNITION_H
#define SENSOR_RECOGNITION_H

#include "object/object.h"

namespace n_sensor_recognition {
	class Csensor_recognition :public Object
	{
	public:
		Csensor_recognition();
		~Csensor_recognition();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_recognition); }
	};
}

using namespace n_sensor_recognition;

#endif
