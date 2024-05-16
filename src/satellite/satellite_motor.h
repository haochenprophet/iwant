#ifndef SATELLITE_MOTOR_H
#define SATELLITE_MOTOR_H

#include "object/object.h"

namespace n_satellite_motor {
	class Csatellite_motor :public Object
	{
	public:
		Csatellite_motor();
		~Csatellite_motor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_motor); }
	};
}

using namespace n_satellite_motor;

#endif
