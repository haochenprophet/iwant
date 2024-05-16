#ifndef SPACEPORT_FIND_H
#define SPACEPORT_FIND_H

#include "object/object.h"

namespace n_spaceport_find {
	class Cspaceport_find :public Object
	{
	public:
		Cspaceport_find();
		~Cspaceport_find();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_find); }
	};
}

using namespace n_spaceport_find;

#endif
