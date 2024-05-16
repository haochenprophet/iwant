#ifndef SENSOR_GET_H
#define SENSOR_GET_H

#include "object/object.h"

namespace n_sensor_get {
	class Csensor_get :public Object
	{
	public:
		Csensor_get();
		~Csensor_get();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_get); }
	};
}

using namespace n_sensor_get;

#endif
