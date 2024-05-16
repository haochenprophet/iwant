#ifndef SATELLITE_SUSPENSION_H
#define SATELLITE_SUSPENSION_H

#include "object/object.h"

namespace n_satellite_suspension {
	class Csatellite_suspension :public Object
	{
	public:
		Csatellite_suspension();
		~Csatellite_suspension();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_suspension); }
	};
}

using namespace n_satellite_suspension;

#endif
