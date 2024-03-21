#ifndef SATELLITE_SOS_H
#define SATELLITE_SOS_H

#include "../object.h"

namespace n_satellite_sos {
	class Csatellite_sos :public Object
	{
	public:
		Csatellite_sos();
		~Csatellite_sos();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_sos); }
	};
}

using namespace n_satellite_sos;

#endif
