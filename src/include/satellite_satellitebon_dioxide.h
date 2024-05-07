#ifndef SATELLITE_SATELLITEBON_DIOXIDE_H
#define SATELLITE_SATELLITEBON_DIOXIDE_H

#include "../object.h"

namespace n_satellite_satellitebon_dioxide {
	class Csatellite_satellitebon_dioxide :public Object
	{
	public:
		Csatellite_satellitebon_dioxide();
		~Csatellite_satellitebon_dioxide();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_satellitebon_dioxide); }
	};
}

using namespace n_satellite_satellitebon_dioxide;

#endif
