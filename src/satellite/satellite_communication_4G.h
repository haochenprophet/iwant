#ifndef SATELLITE_COMMUNICATION_4G_H
#define SATELLITE_COMMUNICATION_4G_H

#include "object/object.h"

namespace n_satellite_communication_4G {
	class Csatellite_communication_4G :public Object
	{
	public:
		Csatellite_communication_4G();
		~Csatellite_communication_4G();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_communication_4G); }
	};
}

using namespace n_satellite_communication_4G;

#endif
