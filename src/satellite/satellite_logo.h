#ifndef SATELLITE_LOGO_H
#define SATELLITE_LOGO_H

#include "../object.h"

namespace n_satellite_logo {
	class Csatellite_logo :public Object
	{
	public:
		Csatellite_logo();
		~Csatellite_logo();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_logo); }
	};
}

using namespace n_satellite_logo;

#endif
