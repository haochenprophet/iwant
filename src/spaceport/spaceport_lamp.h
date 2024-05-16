#ifndef SPACEPORT_LAMP_H
#define SPACEPORT_LAMP_H

#include "object/object.h"

namespace n_spaceport_lamp {
	class Cspaceport_lamp :public Object
	{
	public:
		Cspaceport_lamp();
		~Cspaceport_lamp();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_lamp); }
	};
}

using namespace n_spaceport_lamp;

#endif
