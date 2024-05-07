#ifndef SATELLITE_CLOCK_H
#define SATELLITE_CLOCK_H

#include "../object.h"

namespace n_satellite_clock {
	class Csatellite_clock :public Object
	{
	public:
		Csatellite_clock();
		~Csatellite_clock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_clock); }
	};
}

using namespace n_satellite_clock;

#endif
