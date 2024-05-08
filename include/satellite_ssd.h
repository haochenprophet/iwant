#ifndef SATELLITE_SSD_H
#define SATELLITE_SSD_H

#include "../object.h"

namespace n_satellite_ssd {
	class Csatellite_ssd :public Object
	{
	public:
		Csatellite_ssd();
		~Csatellite_ssd();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_ssd); }
	};
}

using namespace n_satellite_ssd;

#endif
