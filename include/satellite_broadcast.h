#ifndef SATELLITE_BROADCAST_H
#define SATELLITE_BROADCAST_H

#include "../object.h"

namespace n_satellite_broadcast {
	class Csatellite_broadcast :public Object
	{
	public:
		Csatellite_broadcast();
		~Csatellite_broadcast();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_broadcast); }
	};
}

using namespace n_satellite_broadcast;

#endif
