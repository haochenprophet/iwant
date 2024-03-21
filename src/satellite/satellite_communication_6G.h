#ifndef SATELLITE_COMMUNICATION_6G_H
#define SATELLITE_COMMUNICATION_6G_H

#include "../object.h"

namespace n_satellite_communication_6G {
	class Csatellite_communication_6G :public Object
	{
	public:
		Csatellite_communication_6G();
		~Csatellite_communication_6G();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_communication_6G); }
	};
}

using namespace n_satellite_communication_6G;

#endif
