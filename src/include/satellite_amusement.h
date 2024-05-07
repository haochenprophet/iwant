#ifndef SATELLITE_AMUSEMENT_H
#define SATELLITE_AMUSEMENT_H

#include "../object.h"

namespace n_satellite_amusement {
	class Csatellite_amusement :public Object
	{
	public:
		Csatellite_amusement();
		~Csatellite_amusement();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_amusement); }
	};
}

using namespace n_satellite_amusement;

#endif
