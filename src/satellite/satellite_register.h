#ifndef SATELLITE_REGISTER_H
#define SATELLITE_REGISTER_H

#include "object/object.h"

namespace n_satellite_register {
	class Csatellite_register :public Object
	{
	public:
		Csatellite_register();
		~Csatellite_register();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_register); }
	};
}

using namespace n_satellite_register;

#endif
