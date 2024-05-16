#ifndef SPACEPORT_WORK_H
#define SPACEPORT_WORK_H

#include "object/object.h"

namespace n_spaceport_work {
	class Cspaceport_work :public Object
	{
	public:
		Cspaceport_work();
		~Cspaceport_work();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_work); }
	};
}

using namespace n_spaceport_work;

#endif
