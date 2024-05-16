#ifndef SPACEPORT_SPACE_H
#define SPACEPORT_SPACE_H

#include "object/object.h"

namespace n_spaceport_space {
	class Cspaceport_space :public Object
	{
	public:
		Cspaceport_space();
		~Cspaceport_space();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_space); }
	};
}

using namespace n_spaceport_space;

#endif
