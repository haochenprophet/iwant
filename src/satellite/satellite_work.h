#ifndef SATELLITE_WORK_H
#define SATELLITE_WORK_H

#include "object/object.h"

namespace n_satellite_work {
	class Csatellite_work :public Object
	{
	public:
		Csatellite_work();
		~Csatellite_work();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_work); }
	};
}

using namespace n_satellite_work;

#endif
