#ifndef SATELLITE_WIFI_H
#define SATELLITE_WIFI_H

#include "../object.h"

namespace n_satellite_wifi {
	class Csatellite_wifi :public Object
	{
	public:
		Csatellite_wifi();
		~Csatellite_wifi();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_wifi); }
	};
}

using namespace n_satellite_wifi;

#endif
