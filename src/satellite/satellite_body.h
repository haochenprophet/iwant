#ifndef SATELLITE_BODY_H
#define SATELLITE_BODY_H

#include "object/object.h"

namespace n_satellite_body {
	class Csatellite_body :public Object
	{
	public:
		Csatellite_body();
		~Csatellite_body();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_body); }
	};
}

using namespace n_satellite_body;

#endif
