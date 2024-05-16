#ifndef SPACEPORT_AUTO_H
#define SPACEPORT_AUTO_H

#include "object/object.h"

namespace n_spaceport_auto {
	class Cspaceport_auto :public Object
	{
	public:
		Cspaceport_auto();
		~Cspaceport_auto();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_auto); }
	};
}

using namespace n_spaceport_auto;

#endif
