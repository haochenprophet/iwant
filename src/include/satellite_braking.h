#ifndef SATELLITE_BRAKING_H
#define SATELLITE_BRAKING_H

#include "../object.h"

namespace n_satellite_braking {
	class Csatellite_braking :public Object
	{
	public:
		Csatellite_braking();
		~Csatellite_braking();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_braking); }
	};
}

using namespace n_satellite_braking;

#endif
