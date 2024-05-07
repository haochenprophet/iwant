#ifndef SATELLITE_REFRIGERATOR_H
#define SATELLITE_REFRIGERATOR_H

#include "../object.h"

namespace n_satellite_refrigerator {
	class Csatellite_refrigerator :public Object
	{
	public:
		Csatellite_refrigerator();
		~Csatellite_refrigerator();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_refrigerator); }
	};
}

using namespace n_satellite_refrigerator;

#endif
