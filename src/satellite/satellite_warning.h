#ifndef SATELLITE_WARNING_H
#define SATELLITE_WARNING_H

#include "../object.h"

namespace n_satellite_warning {
	class Csatellite_warning :public Object
	{
	public:
		Csatellite_warning();
		~Csatellite_warning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_warning); }
	};
}

using namespace n_satellite_warning;

#endif
