#ifndef SATELLITE_SERIAL_PORT_H
#define SATELLITE_SERIAL_PORT_H

#include "../object.h"

namespace n_satellite_serial_port {
	class Csatellite_serial_port :public Object
	{
	public:
		Csatellite_serial_port();
		~Csatellite_serial_port();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_serial_port); }
	};
}

using namespace n_satellite_serial_port;

#endif
