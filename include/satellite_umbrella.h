#ifndef SATELLITE_UMBRELLA_H
#define SATELLITE_UMBRELLA_H

#include "../object.h"

namespace n_satellite_umbrella {
	class Csatellite_umbrella :public Object
	{
	public:
		Csatellite_umbrella();
		~Csatellite_umbrella();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_umbrella); }
	};
}

using namespace n_satellite_umbrella;

#endif
