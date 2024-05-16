#ifndef SATELLITE_WIRELESS_H
#define SATELLITE_WIRELESS_H

#include "object/object.h"

namespace n_satellite_wireless {
	class Csatellite_wireless :public Object
	{
	public:
		Csatellite_wireless();
		~Csatellite_wireless();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_wireless); }
	};
}

using namespace n_satellite_wireless;

#endif
