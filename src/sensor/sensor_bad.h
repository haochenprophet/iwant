#ifndef SENSOR_BAD_H
#define SENSOR_BAD_H

#include "object/object.h"

namespace n_sensor_bad {
	class Csensor_bad :public Object
	{
	public:
		Csensor_bad();
		~Csensor_bad();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_bad); }
	};
}

using namespace n_sensor_bad;

#endif
