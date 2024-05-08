#ifndef RADAR_TIME_H
#define RADAR_TIME_H

#include "../object.h"

namespace n_radar_time {
	class Cradar_time :public Object
	{
	public:
		Cradar_time();
		~Cradar_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_time); }
	};
}

using namespace n_radar_time;

#endif
