#ifndef SATELLITE_COLOUR_H
#define SATELLITE_COLOUR_H

#include "object/object.h"

namespace n_satellite_colour {
	class Csatellite_colour :public Object
	{
	public:
		Csatellite_colour();
		~Csatellite_colour();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_colour); }
	};
}

using namespace n_satellite_colour;

#endif
