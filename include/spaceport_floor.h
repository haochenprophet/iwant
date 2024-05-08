#ifndef SPACEPORT_FLOOR_H
#define SPACEPORT_FLOOR_H

#include "../object.h"

namespace n_spaceport_floor {
	class Cspaceport_floor :public Object
	{
	public:
		Cspaceport_floor();
		~Cspaceport_floor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_floor); }
	};
}

using namespace n_spaceport_floor;

#endif
