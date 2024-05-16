#ifndef RADAR_ANTENNA_H
#define RADAR_ANTENNA_H

#include "object/object.h"

namespace n_radar_antenna {
	class Cradar_antenna :public Object
	{
	public:
		Cradar_antenna();
		~Cradar_antenna();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_antenna); }
	};
}

using namespace n_radar_antenna;

#endif
