#ifndef SATELLITE_MODE_DAYTIME_H
#define SATELLITE_MODE_DAYTIME_H

#include "../object.h"

namespace n_satellite_mode_daytime {
	class Csatellite_mode_daytime :public Object
	{
	public:
		Csatellite_mode_daytime();
		~Csatellite_mode_daytime();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mode_daytime); }
	};
}

using namespace n_satellite_mode_daytime;

#endif
