#ifndef SPACEPORT_PLANT_H
#define SPACEPORT_PLANT_H

#include "object/object.h"

namespace n_spaceport_plant {
	class Cspaceport_plant :public Object
	{
	public:
		Cspaceport_plant();
		~Cspaceport_plant();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_plant); }
	};
}

using namespace n_spaceport_plant;

#endif
