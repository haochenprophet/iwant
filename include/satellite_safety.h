#ifndef SATELLITE_SAFETY_H
#define SATELLITE_SAFETY_H

#include "../object.h"

namespace n_satellite_safety {
	class Csatellite_safety :public Object
	{
	public:
		Csatellite_safety();
		~Csatellite_safety();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_safety); }
	};
}

using namespace n_satellite_safety;

#endif
