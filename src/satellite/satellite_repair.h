#ifndef SATELLITE_REPAIR_H
#define SATELLITE_REPAIR_H

#include "object/object.h"

namespace n_satellite_repair {
	class Csatellite_repair :public Object
	{
	public:
		Csatellite_repair();
		~Csatellite_repair();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_repair); }
	};
}

using namespace n_satellite_repair;

#endif
