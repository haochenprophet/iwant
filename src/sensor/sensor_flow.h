#ifndef SENSOR_FLOW_H
#define SENSOR_FLOW_H

#include "object/object.h"

namespace n_sensor_flow {
	class Csensor_flow :public Object
	{
	public:
		Csensor_flow();
		~Csensor_flow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_flow); }
	};
}

using namespace n_sensor_flow;

#endif
