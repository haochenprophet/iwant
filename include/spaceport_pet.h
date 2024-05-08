#ifndef SPACEPORT_PET_H
#define SPACEPORT_PET_H

#include "../object.h"

namespace n_spaceport_pet {
	class Cspaceport_pet :public Object
	{
	public:
		Cspaceport_pet();
		~Cspaceport_pet();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_pet); }
	};
}

using namespace n_spaceport_pet;

#endif
