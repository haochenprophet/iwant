#ifndef SATELLITE_MODE_H
#define SATELLITE_MODE_H

#include "object/object.h"

namespace n_satellite_mode {
	class Csatellite_mode :public Object
	{
	public:
		Csatellite_mode();
		~Csatellite_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode); }
	};
}

using namespace n_satellite_mode;

#endif
