#ifndef SATELLITE_BLUETOOTH_H
#define SATELLITE_BLUETOOTH_H

#include "../object.h"

namespace n_satellite_bluetooth {
	class Csatellite_bluetooth :public Object
	{
	public:
		Csatellite_bluetooth();
		~Csatellite_bluetooth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_bluetooth); }
	};
}

using namespace n_satellite_bluetooth;

#endif
