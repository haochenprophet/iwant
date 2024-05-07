#ifndef SATELLITE_ARRAY_H
#define SATELLITE_ARRAY_H

#include "../object.h"

namespace n_satellite_array {
	class Csatellite_array :public Object
	{
	public:
		Csatellite_array();
		~Csatellite_array();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_array); }
	};
}

using namespace n_satellite_array;

#endif
