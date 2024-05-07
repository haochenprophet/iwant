#ifndef SPACEPORT_OXYGEN_H
#define SPACEPORT_OXYGEN_H

#include "../object.h"

namespace n_spaceport_oxygen {
	class Cspaceport_oxygen :public Object
	{
	public:
		Cspaceport_oxygen();
		~Cspaceport_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_oxygen); }
	};
}

using namespace n_spaceport_oxygen;

#endif
