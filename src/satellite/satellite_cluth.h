#ifndef SATELLITE_CLUTH_H
#define SATELLITE_CLUTH_H

#include "object/object.h"

namespace n_satellite_cluth {
	class Csatellite_cluth :public Object
	{
	public:
		Csatellite_cluth();
		~Csatellite_cluth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_cluth); }
	};
}

using namespace n_satellite_cluth;

#endif
