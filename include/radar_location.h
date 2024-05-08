#ifndef RADAR_LOCATION_H
#define RADAR_LOCATION_H

#include "../object.h"

namespace n_radar_location {
	class Cradar_location :public Object
	{
	public:
		Cradar_location();
		~Cradar_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_location); }
	};
}

using namespace n_radar_location;

#endif
