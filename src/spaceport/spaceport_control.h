#ifndef SPACEPORT_CONTROL_H
#define SPACEPORT_CONTROL_H

#include "object/object.h"

namespace n_spaceport_control {
	class Cspaceport_control :public Object
	{
	public:
		Cspaceport_control();
		~Cspaceport_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_control); }
	};
}

using namespace n_spaceport_control;

#endif
