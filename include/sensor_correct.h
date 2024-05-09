#ifndef SENSOR_CORRECT_H
#define SENSOR_CORRECT_H

#include "object.h"

namespace n_sensor_correct {
	class Csensor_correct :public Object
	{
	public:
		Csensor_correct();
		~Csensor_correct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_correct); }
	};
}

using namespace n_sensor_correct;

#endif
