#ifndef SATELLITE_IMPETUS_H
#define SATELLITE_IMPETUS_H

#include "object/object.h"

namespace n_satellite_impetus {
	class Csatellite_impetus :public Object
	{
	public:
		Csatellite_impetus();
		~Csatellite_impetus();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_impetus); }
	};
}

using namespace n_satellite_impetus;

#endif
