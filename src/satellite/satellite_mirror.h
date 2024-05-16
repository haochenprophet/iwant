#ifndef SATELLITE_MIRROR_H
#define SATELLITE_MIRROR_H

#include "object/object.h"

namespace n_satellite_mirror {
	class Csatellite_mirror :public Object
	{
	public:
		Csatellite_mirror();
		~Csatellite_mirror();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mirror); }
	};
}

using namespace n_satellite_mirror;

#endif
