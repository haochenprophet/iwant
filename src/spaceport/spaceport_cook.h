#ifndef SPACEPORT_COOK_H
#define SPACEPORT_COOK_H

#include "object/object.h"

namespace n_spaceport_cook {
	class Cspaceport_cook :public Object
	{
	public:
		Cspaceport_cook();
		~Cspaceport_cook();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_cook); }
	};
}

using namespace n_spaceport_cook;

#endif
