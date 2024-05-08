#ifndef RADAR_POWER_H
#define RADAR_POWER_H

#include "../object.h"

namespace n_radar_power {
	class Cradar_power :public Object
	{
	public:
		Cradar_power();
		~Cradar_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_power); }
	};
}

using namespace n_radar_power;

#endif
