#ifndef SPACEPORT_TIMELINE_H
#define SPACEPORT_TIMELINE_H

#include "object/object.h"

namespace n_spaceport_timeline {
	class Cspaceport_timeline :public Object
	{
	public:
		Cspaceport_timeline();
		~Cspaceport_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_timeline); }
	};
}

using namespace n_spaceport_timeline;

#endif
