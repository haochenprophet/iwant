#ifndef SATELLITE_AIRBAG_H
#define SATELLITE_AIRBAG_H

#include "object/object.h"

namespace n_satellite_airbag {
	class Csatellite_airbag :public Object
	{
	public:
		Csatellite_airbag();
		~Csatellite_airbag();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_airbag); }
	};
}

using namespace n_satellite_airbag;

#endif
