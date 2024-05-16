#ifndef SPACEPORT_ROBOT_H
#define SPACEPORT_ROBOT_H

#include "object/object.h"

namespace n_spaceport_robot {
	class Cspaceport_robot :public Object
	{
	public:
		Cspaceport_robot();
		~Cspaceport_robot();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_robot); }
	};
}

using namespace n_spaceport_robot;

#endif
