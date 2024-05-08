#ifndef SATELLITE_KEY_H
#define SATELLITE_KEY_H

#include "../object.h"

namespace n_satellite_key {
	class Csatellite_key :public Object
	{
	public:
		Csatellite_key();
		~Csatellite_key();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_key); }
	};
}

using namespace n_satellite_key;

#endif
