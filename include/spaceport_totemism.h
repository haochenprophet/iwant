#ifndef SPACEPORT_TOTEMISM_H
#define SPACEPORT_TOTEMISM_H

#include "../object.h"

namespace n_spaceport_totemism {
	class Cspaceport_totemism :public Object
	{
	public:
		Cspaceport_totemism();
		~Cspaceport_totemism();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_totemism); }
	};
}

using namespace n_spaceport_totemism;

#endif
