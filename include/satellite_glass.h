#ifndef SATELLITE_GLASS_H
#define SATELLITE_GLASS_H

#include "../object.h"

namespace n_satellite_glass {
	class Csatellite_glass :public Object
	{
	public:
		Csatellite_glass();
		~Csatellite_glass();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_glass); }
	};
}

using namespace n_satellite_glass;

#endif
