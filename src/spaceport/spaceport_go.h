#ifndef SPACEPORT_GO_H
#define SPACEPORT_GO_H

#include "object/object.h"

namespace n_spaceport_go {
	class Cspaceport_go :public Object
	{
	public:
		Cspaceport_go();
		~Cspaceport_go();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_go); }
	};
}

using namespace n_spaceport_go;

#endif
