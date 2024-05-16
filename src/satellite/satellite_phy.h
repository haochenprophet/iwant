#ifndef SATELLITE_PHY_H
#define SATELLITE_PHY_H

#include "object/object.h"

namespace n_satellite_phy {
	class Csatellite_phy :public Object
	{
	public:
		Csatellite_phy();
		~Csatellite_phy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_phy); }
	};
}

using namespace n_satellite_phy;

#endif
