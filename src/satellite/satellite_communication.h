#ifndef SATELLITE_COMMUNICATION_H
#define SATELLITE_COMMUNICATION_H

#include "object/object.h"

namespace n_satellite_communication {
	class Csatellite_communication :public Object
	{
	public:
		Csatellite_communication();
		~Csatellite_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_communication); }
	};
}

using namespace n_satellite_communication;

#endif
