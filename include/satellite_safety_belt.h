#ifndef SATELLITE_SAFETY_BELT_H
#define SATELLITE_SAFETY_BELT_H

#include "../object.h"

namespace n_satellite_safety_belt {
	class Csatellite_safety_belt :public Object
	{
	public:
		Csatellite_safety_belt();
		~Csatellite_safety_belt();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_safety_belt); }
	};
}

using namespace n_satellite_safety_belt;

#endif
