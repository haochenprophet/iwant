#ifndef SPACEPORT_TRAVEL_H
#define SPACEPORT_TRAVEL_H

#include "../object.h"

namespace n_spaceport_travel {
	class Cspaceport_travel :public Object
	{
	public:
		Cspaceport_travel();
		~Cspaceport_travel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_travel); }
	};
}

using namespace n_spaceport_travel;

#endif
