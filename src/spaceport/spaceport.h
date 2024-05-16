#ifndef SPACEPORT_H
#define SPACEPORT_H

#include "object/object.h"

namespace n_spaceport {
	class Cspaceport :public Object
	{
	public:
		Cspaceport();
		~Cspaceport();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport); }
	};
}

using namespace n_spaceport;

#endif
