#ifndef SATELLITE_CPU_H
#define SATELLITE_CPU_H

#include "object/object.h"

namespace n_satellite_cpu {
	class Csatellite_cpu :public Object
	{
	public:
		Csatellite_cpu();
		~Csatellite_cpu();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_cpu); }
	};
}

using namespace n_satellite_cpu;

#endif
