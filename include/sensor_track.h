#ifndef SENSOR_TRACK_H
#define SENSOR_TRACK_H

#include "object.h"

namespace n_sensor_track {
	class Csensor_track :public Object
	{
	public:
		Csensor_track();
		~Csensor_track();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csensor_track); }
	};
}

using namespace n_sensor_track;

#endif
