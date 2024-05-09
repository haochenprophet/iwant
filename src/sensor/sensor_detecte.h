#ifndef SENSOR_DETECTE_H
#define SENSOR_DETECTE_H

#include "object.h"

namespace n_sensor_detecte {
	class Csensor_detecte :public Object
	{
	public:
		Csensor_detecte();
		~Csensor_detecte();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_detecte); }
	};
}

using namespace n_sensor_detecte;

#endif
