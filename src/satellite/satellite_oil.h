#ifndef SATELLITE_OIL_H
#define SATELLITE_OIL_H

#include "../object.h"

namespace n_satellite_oil {
	class Csatellite_oil :public Object
	{
	public:
		Csatellite_oil();
		~Csatellite_oil();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_oil); }
	};
}

using namespace n_satellite_oil;

#endif
