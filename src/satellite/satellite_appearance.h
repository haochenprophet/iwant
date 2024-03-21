#ifndef SATELLITE_APPEARANCE_H
#define SATELLITE_APPEARANCE_H

#include "../object.h"

namespace n_satellite_appearance {
	class Csatellite_appearance :public Object
	{
	public:
		Csatellite_appearance();
		~Csatellite_appearance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_appearance); }
	};
}

using namespace n_satellite_appearance;

#endif
