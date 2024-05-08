#ifndef SATELLITE_MCU_H
#define SATELLITE_MCU_H

#include "../object.h"

namespace n_satellite_mcu {
	class Csatellite_mcu :public Object
	{
	public:
		Csatellite_mcu();
		~Csatellite_mcu();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_mcu); }
	};
}

using namespace n_satellite_mcu;

#endif
