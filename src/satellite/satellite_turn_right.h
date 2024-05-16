#ifndef SATELLITE_TURN_RIGHT_H
#define SATELLITE_TURN_RIGHT_H

#include "object/object.h"

namespace n_satellite_turn_right {
	class Csatellite_turn_right :public Object
	{
	public:
		Csatellite_turn_right();
		~Csatellite_turn_right();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_turn_right); }
	};
}

using namespace n_satellite_turn_right;

#endif
