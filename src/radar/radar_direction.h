#ifndef RADAR_DIRECTION_H
#define RADAR_DIRECTION_H

#include "../object.h"

namespace n_radar_direction {
	class Cradar_direction :public Object
	{
	public:
		Cradar_direction();
		~Cradar_direction();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_direction); }
	};
}

using namespace n_radar_direction;

#endif
