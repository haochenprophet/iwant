#ifndef SATELLITE_GESTURE_H
#define SATELLITE_GESTURE_H

#include "object/object.h"

namespace n_satellite_gesture {
	class Csatellite_gesture :public Object
	{
	public:
		Csatellite_gesture();
		~Csatellite_gesture();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_gesture); }
	};
}

using namespace n_satellite_gesture;

#endif
