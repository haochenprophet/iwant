#ifndef SATELLITE_ENGINE_H
#define SATELLITE_ENGINE_H

#include "object/object.h"

namespace n_satellite_engine {
	class Csatellite_engine :public Object
	{
	public:
		Csatellite_engine();
		~Csatellite_engine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_engine); }
	};
}

using namespace n_satellite_engine;

#endif
