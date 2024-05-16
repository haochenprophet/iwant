#ifndef SATELLITE_MOVE_H
#define SATELLITE_MOVE_H

#include "object/object.h"

namespace n_satellite_move {
	class Csatellite_move :public Object
	{
	public:
		Csatellite_move();
		~Csatellite_move();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_move); }
	};
}

using namespace n_satellite_move;

#endif
