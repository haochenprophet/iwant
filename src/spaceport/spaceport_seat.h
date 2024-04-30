#ifndef SPACEPORT_SEAT_H
#define SPACEPORT_SEAT_H

#include "../object.h"

namespace n_spaceport_seat {
	class Cspaceport_seat :public Object
	{
	public:
		Cspaceport_seat();
		~Cspaceport_seat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_seat); }
	};
}

using namespace n_spaceport_seat;

#endif
