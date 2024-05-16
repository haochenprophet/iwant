#ifndef SPACEPORT_BACK_H
#define SPACEPORT_BACK_H

#include "object/object.h"

namespace n_spaceport_back {
	class Cspaceport_back :public Object
	{
	public:
		Cspaceport_back();
		~Cspaceport_back();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_back); }
	};
}

using namespace n_spaceport_back;

#endif
