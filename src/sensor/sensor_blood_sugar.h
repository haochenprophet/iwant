#ifndef SENSOR_BLOOD_SUGAR_H
#define SENSOR_BLOOD_SUGAR_H

#include "object.h"

namespace n_sensor_blood_sugar {
	class Csensor_blood_sugar :public Object
	{
	public:
		Csensor_blood_sugar();
		~Csensor_blood_sugar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_blood_sugar); }
	};
}

using namespace n_sensor_blood_sugar;

#endif
