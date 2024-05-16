#ifndef SENSOR_GOOD_H
#define SENSOR_GOOD_H

#include "object/object.h"

namespace n_sensor_good {
	class Csensor_good :public Object
	{
	public:
		Csensor_good();
		~Csensor_good();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_good); }
	};
}

using namespace n_sensor_good;

#endif
