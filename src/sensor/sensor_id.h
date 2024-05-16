#ifndef SENSOR_ID_H
#define SENSOR_ID_H

#include "object/object.h"

namespace n_sensor_id {
	class Csensor_id :public Object
	{
	public:
		Csensor_id();
		~Csensor_id();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_id); }
	};
}

using namespace n_sensor_id;

#endif
