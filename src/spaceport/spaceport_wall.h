#ifndef SPACEPORT_WALL_H
#define SPACEPORT_WALL_H

#include "object/object.h"

namespace n_spaceport_wall {
	class Cspaceport_wall :public Object
	{
	public:
		Cspaceport_wall();
		~Cspaceport_wall();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_wall); }
	};
}

using namespace n_spaceport_wall;

#endif
