#ifndef SPACEPORT_UPDATE_H
#define SPACEPORT_UPDATE_H

#include "object/object.h"

namespace n_spaceport_update {
	class Cspaceport_update :public Object
	{
	public:
		Cspaceport_update();
		~Cspaceport_update();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_update); }
	};
}

using namespace n_spaceport_update;

#endif
