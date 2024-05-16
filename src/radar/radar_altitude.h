#ifndef RADAR_ALTITUDE_H
#define RADAR_ALTITUDE_H

#include "object/object.h"

namespace n_radar_altitude {
	class Cradar_altitude :public Object
	{
	public:
		Cradar_altitude();
		~Cradar_altitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_altitude); }
	};
}

using namespace n_radar_altitude;

#endif
