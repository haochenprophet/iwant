#ifndef SENSOR_EMI_H
#define SENSOR_EMI_H

#include "object.h"

namespace n_sensor_emi {
	class Csensor_emi :public Object
	{
	public:
		Csensor_emi();
		~Csensor_emi();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_emi); }
	};
}

using namespace n_sensor_emi;

#endif
