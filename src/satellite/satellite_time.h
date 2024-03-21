#ifndef SATELLITE_TIME_H
#define SATELLITE_TIME_H

#include "../object.h"

namespace n_satellite_time {
	class Csatellite_time :public Object
	{
	public:
		Csatellite_time();
		~Csatellite_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_time); }
	};
}

using namespace n_satellite_time;

#endif
