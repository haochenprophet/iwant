#ifndef SENSOR_H
#define SENSOR_H

#include "object/object.h"

namespace n_sensor {
	class Csensor :public Object
	{
	public:
		Csensor();
		~Csensor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor); }
	};
}

using namespace n_sensor;

#endif
