#ifndef SATELLITE_MODE_NIGHT_H
#define SATELLITE_MODE_NIGHT_H

#include "../object.h"

namespace n_satellite_mode_night {
	class Csatellite_mode_night :public Object
	{
	public:
		Csatellite_mode_night();
		~Csatellite_mode_night();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode_night); }
	};
}

using namespace n_satellite_mode_night;

#endif
