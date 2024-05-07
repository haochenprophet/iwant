#ifndef SATELLITE_MEMORY_H
#define SATELLITE_MEMORY_H

#include "../object.h"

namespace n_satellite_memory {
	class Csatellite_memory :public Object
	{
	public:
		Csatellite_memory();
		~Csatellite_memory();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_memory); }
	};
}

using namespace n_satellite_memory;

#endif
