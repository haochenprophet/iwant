#ifndef SPACEPORT_LIVE_H
#define SPACEPORT_LIVE_H

#include "object/object.h"

namespace n_spaceport_live {
	class Cspaceport_live :public Object
	{
	public:
		Cspaceport_live();
		~Cspaceport_live();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_live); }
	};
}

using namespace n_spaceport_live;

#endif
