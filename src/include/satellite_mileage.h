#ifndef SATELLITE_MILEAGE_H
#define SATELLITE_MILEAGE_H

#include "../object.h"

namespace n_satellite_mileage {
	class Csatellite_mileage :public Object
	{
	public:
		Csatellite_mileage();
		~Csatellite_mileage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mileage); }
	};
}

using namespace n_satellite_mileage;

#endif
