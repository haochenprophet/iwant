#ifndef SATELLITE_SCHEME_H
#define SATELLITE_SCHEME_H

#include "../object.h"

namespace n_satellite_scheme {
	class Csatellite_scheme :public Object
	{
	public:
		Csatellite_scheme();
		~Csatellite_scheme();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_scheme); }
	};
}

using namespace n_satellite_scheme;

#endif
