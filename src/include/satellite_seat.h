#ifndef SATELLITE_SEAT_H
#define SATELLITE_SEAT_H

#include "../object.h"

namespace n_satellite_seat {
	class Csatellite_seat :public Object
	{
	public:
		Csatellite_seat();
		~Csatellite_seat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_seat); }
	};
}

using namespace n_satellite_seat;

#endif
