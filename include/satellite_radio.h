#ifndef SATELLITE_RADIO_H
#define SATELLITE_RADIO_H

#include "../object.h"

namespace n_satellite_radio {
	class Csatellite_radio :public Object
	{
	public:
		Csatellite_radio();
		~Csatellite_radio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_radio); }
	};
}

using namespace n_satellite_radio;

#endif
