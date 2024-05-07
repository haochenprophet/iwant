#ifndef SATELLITE_ESCAPE_H
#define SATELLITE_ESCAPE_H

#include "../object.h"

namespace n_satellite_escape {
	class Csatellite_escape :public Object
	{
	public:
		Csatellite_escape();
		~Csatellite_escape();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_escape); }
	};
}

using namespace n_satellite_escape;

#endif
