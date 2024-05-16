#ifndef SPACEPORT_ADD_H
#define SPACEPORT_ADD_H

#include "object/object.h"

namespace n_spaceport_add {
	class Cspaceport_add :public Object
	{
	public:
		Cspaceport_add();
		~Cspaceport_add();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_add); }
	};
}

using namespace n_spaceport_add;

#endif
