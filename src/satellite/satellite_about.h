#ifndef SATELLITE_ABOUT_H
#define SATELLITE_ABOUT_H

#include "object/object.h"

namespace n_satellite_about {
	class Csatellite_about :public Object
	{
	public:
		Csatellite_about();
		~Csatellite_about();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_about); }
	};
}

using namespace n_satellite_about;

#endif
