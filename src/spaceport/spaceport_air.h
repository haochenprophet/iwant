#ifndef SPACEPORT_AIR_H
#define SPACEPORT_AIR_H

#include "object/object.h"

namespace n_spaceport_air {
	class Cspaceport_air :public Object
	{
	public:
		Cspaceport_air();
		~Cspaceport_air();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_air); }
	};
}

using namespace n_spaceport_air;

#endif
