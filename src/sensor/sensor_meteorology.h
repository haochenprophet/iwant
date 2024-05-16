#ifndef SENSOR_METEOROLOGY_H
#define SENSOR_METEOROLOGY_H

#include "object/object.h"

namespace n_sensor_meteorology {
	class Csensor_meteorology :public Object
	{
	public:
		Csensor_meteorology();
		~Csensor_meteorology();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_meteorology); }
	};
}

using namespace n_sensor_meteorology;

#endif
