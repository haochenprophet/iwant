#ifndef SATELLITE_TURN_LEFT_H
#define SATELLITE_TURN_LEFT_H

#include "../object.h"

namespace n_satellite_turn_left {
	class Csatellite_turn_left :public Object
	{
	public:
		Csatellite_turn_left();
		~Csatellite_turn_left();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_turn_left); }
	};
}

using namespace n_satellite_turn_left;

#endif
