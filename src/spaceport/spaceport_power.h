#ifndef SPACEPORT_POWER_H
#define SPACEPORT_POWER_H

#include "object/object.h"

namespace n_spaceport_power {
	class Cspaceport_power :public Object
	{
	public:
		Cspaceport_power();
		~Cspaceport_power();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_power); }
	};
}

using namespace n_spaceport_power;

#endif
