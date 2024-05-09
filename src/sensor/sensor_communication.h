#ifndef SENSOR_COMMUNICATION_H
#define SENSOR_COMMUNICATION_H

#include "object.h"

namespace n_sensor_communication {
	class Csensor_communication :public Object
	{
	public:
		Csensor_communication();
		~Csensor_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_communication); }
	};
}

using namespace n_sensor_communication;

#endif
