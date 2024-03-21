#ifndef SATELLITE_HOOD_H
#define SATELLITE_HOOD_H

#include "../object.h"

namespace n_satellite_hood {
	class Csatellite_hood :public Object
	{
	public:
		Csatellite_hood();
		~Csatellite_hood();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_hood); }
	};
}

using namespace n_satellite_hood;

#endif
