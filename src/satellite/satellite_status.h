#ifndef SATELLITE_STATUS_H
#define SATELLITE_STATUS_H

#include "object/object.h"

namespace n_satellite_status {
	class Csatellite_status :public Object
	{
	public:
		Csatellite_status();
		~Csatellite_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_status); }
	};
}

using namespace n_satellite_status;

#endif
