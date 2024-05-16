#ifndef SPACEPORT_TRAGEDY_H
#define SPACEPORT_TRAGEDY_H

#include "object/object.h"

namespace n_spaceport_tragedy {
	class Cspaceport_tragedy :public Object
	{
	public:
		Cspaceport_tragedy();
		~Cspaceport_tragedy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_tragedy); }
	};
}

using namespace n_spaceport_tragedy;

#endif
