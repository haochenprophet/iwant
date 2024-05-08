#ifndef SATELLITE_RESCUE_H
#define SATELLITE_RESCUE_H

#include "../object.h"

namespace n_satellite_rescue {
	class Csatellite_rescue :public Object
	{
	public:
		Csatellite_rescue();
		~Csatellite_rescue();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_rescue); }
	};
}

using namespace n_satellite_rescue;

#endif
