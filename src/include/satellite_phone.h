#ifndef SATELLITE_PHONE_H
#define SATELLITE_PHONE_H

#include "../object.h"

namespace n_satellite_phone {
	class Csatellite_phone :public Object
	{
	public:
		Csatellite_phone();
		~Csatellite_phone();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_phone); }
	};
}

using namespace n_satellite_phone;

#endif
