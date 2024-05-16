#ifndef SPACEPORT_TELEVISION_H
#define SPACEPORT_TELEVISION_H

#include "object/object.h"

namespace n_spaceport_television {
	class Cspaceport_television :public Object
	{
	public:
		Cspaceport_television();
		~Cspaceport_television();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_television); }
	};
}

using namespace n_spaceport_television;

#endif
