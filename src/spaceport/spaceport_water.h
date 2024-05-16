#ifndef SPACEPORT_WATER_H
#define SPACEPORT_WATER_H

#include "object/object.h"

namespace n_spaceport_water {
	class Cspaceport_water :public Object
	{
	public:
		Cspaceport_water();
		~Cspaceport_water();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_water); }
	};
}

using namespace n_spaceport_water;

#endif
