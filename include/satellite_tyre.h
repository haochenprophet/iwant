#ifndef SATELLITE_TYRE_H
#define SATELLITE_TYRE_H

#include "../object.h"

namespace n_satellite_tyre {
	class Csatellite_tyre :public Object
	{
	public:
		Csatellite_tyre();
		~Csatellite_tyre();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_tyre); }
	};
}

using namespace n_satellite_tyre;

#endif
