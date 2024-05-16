#ifndef SPACEPORT_KITCHEN_H
#define SPACEPORT_KITCHEN_H

#include "object/object.h"

namespace n_spaceport_kitchen {
	class Cspaceport_kitchen :public Object
	{
	public:
		Cspaceport_kitchen();
		~Cspaceport_kitchen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_kitchen); }
	};
}

using namespace n_spaceport_kitchen;

#endif
