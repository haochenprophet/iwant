#ifndef SATELLITE_MAYDAY_H
#define SATELLITE_MAYDAY_H

#include "object/object.h"

namespace n_satellite_mayday {
	class Csatellite_mayday :public Object
	{
	public:
		Csatellite_mayday();
		~Csatellite_mayday();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mayday); }
	};
}

using namespace n_satellite_mayday;

#endif
