#ifndef SENSOR_ON_H
#define SENSOR_ON_H

#include "object.h"

namespace n_sensor_on {
	class Csensor_on :public Object
	{
	public:
		Csensor_on();
		~Csensor_on();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_on); }
	};
}

using namespace n_sensor_on;

#endif
