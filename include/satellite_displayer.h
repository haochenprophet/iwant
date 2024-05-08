#ifndef SATELLITE_DISPLAYER_H
#define SATELLITE_DISPLAYER_H

#include "../object.h"

namespace n_satellite_displayer {
	class Csatellite_displayer :public Object
	{
	public:
		Csatellite_displayer();
		~Csatellite_displayer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_displayer); }
	};
}

using namespace n_satellite_displayer;

#endif
