#ifndef SATELLITE_LOCK_H
#define SATELLITE_LOCK_H

#include "object/object.h"

namespace n_satellite_lock {
	class Csatellite_lock :public Object
	{
	public:
		Csatellite_lock();
		~Csatellite_lock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_lock); }
	};
}

using namespace n_satellite_lock;

#endif
