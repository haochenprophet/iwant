#ifndef SATELLITE_SATELLITEBON_MONOXIDE_H
#define SATELLITE_SATELLITEBON_MONOXIDE_H

#include "object/object.h"

namespace n_satellite_satellitebon_monoxide {
	class Csatellite_satellitebon_monoxide :public Object
	{
	public:
		Csatellite_satellitebon_monoxide();
		~Csatellite_satellitebon_monoxide();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_satellitebon_monoxide); }
	};
}

using namespace n_satellite_satellitebon_monoxide;

#endif
