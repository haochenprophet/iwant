#ifndef RADAR_SLANT_DISTANCE_H
#define RADAR_SLANT_DISTANCE_H

#include "../object.h"

namespace n_radar_slant_distance {
	class Cradar_slant_distance :public Object
	{
	public:
		Cradar_slant_distance();
		~Cradar_slant_distance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_slant_distance); }
	};
}

using namespace n_radar_slant_distance;

#endif
