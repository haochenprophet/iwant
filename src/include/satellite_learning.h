#ifndef SATELLITE_LEARNING_H
#define SATELLITE_LEARNING_H

#include "../object.h"

namespace n_satellite_learning {
	class Csatellite_learning :public Object
	{
	public:
		Csatellite_learning();
		~Csatellite_learning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_learning); }
	};
}

using namespace n_satellite_learning;

#endif
