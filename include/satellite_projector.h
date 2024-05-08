#ifndef SATELLITE_PROJECTOR_H
#define SATELLITE_PROJECTOR_H

#include "../object.h"

namespace n_satellite_projector {
	class Csatellite_projector :public Object
	{
	public:
		Csatellite_projector();
		~Csatellite_projector();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_projector); }
	};
}

using namespace n_satellite_projector;

#endif
