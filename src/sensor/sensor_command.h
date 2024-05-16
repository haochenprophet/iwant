#ifndef SENSOR_COMMAND_H
#define SENSOR_COMMAND_H

#include "object/object.h"

namespace n_sensor_command {
	class Csensor_command :public Object
	{
	public:
		Csensor_command();
		~Csensor_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_command); }
	};
}

using namespace n_sensor_command;

#endif
