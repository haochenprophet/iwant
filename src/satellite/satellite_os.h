#ifndef SATELLITE_OS_H
#define SATELLITE_OS_H

#include "object/object.h"

namespace n_satellite_os {
	class Csatellite_os :public Object
	{
	public:
		Csatellite_os();
		~Csatellite_os();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_os); }
	};
}

using namespace n_satellite_os;

#endif
