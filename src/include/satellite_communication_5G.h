#ifndef SATELLITE_COMMUNICATION_5G_H
#define SATELLITE_COMMUNICATION_5G_H

#include "../object.h"

namespace n_satellite_communication_5G {
	class Csatellite_communication_5G :public Object
	{
	public:
		Csatellite_communication_5G();
		~Csatellite_communication_5G();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_communication_5G); }
	};
}

using namespace n_satellite_communication_5G;

#endif
