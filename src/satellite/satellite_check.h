#ifndef SATELLITE_CHECK_H
#define SATELLITE_CHECK_H

#include "object/object.h"

namespace n_satellite_check {
	class Csatellite_check :public Object
	{
	public:
		Csatellite_check();
		~Csatellite_check();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_check); }
	};
}

using namespace n_satellite_check;

#endif
