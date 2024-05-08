#ifndef SATELLITE_TRUNK_H
#define SATELLITE_TRUNK_H

#include "../object.h"

namespace n_satellite_trunk {
	class Csatellite_trunk :public Object
	{
	public:
		Csatellite_trunk();
		~Csatellite_trunk();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_trunk); }
	};
}

using namespace n_satellite_trunk;

#endif
