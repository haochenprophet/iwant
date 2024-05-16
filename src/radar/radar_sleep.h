#ifndef RADAR_SLEEP_H
#define RADAR_SLEEP_H

#include "object/object.h"

namespace n_radar_sleep {
	class Cradar_sleep :public Object
	{
	public:
		Cradar_sleep();
		~Cradar_sleep();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_sleep); }
	};
}

using namespace n_radar_sleep;

#endif
