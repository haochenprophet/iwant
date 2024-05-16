#ifndef SPACEPORT_LOCATION_H
#define SPACEPORT_LOCATION_H

#include "object/object.h"

namespace n_spaceport_location {
	class Cspaceport_location :public Object
	{
	public:
		Cspaceport_location();
		~Cspaceport_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_location); }
	};
}

using namespace n_spaceport_location;

#endif
