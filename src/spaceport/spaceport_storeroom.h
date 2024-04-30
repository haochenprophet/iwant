#ifndef SPACEPORT_STOREROOM_H
#define SPACEPORT_STOREROOM_H

#include "../object.h"

namespace n_spaceport_storeroom {
	class Cspaceport_storeroom :public Object
	{
	public:
		Cspaceport_storeroom();
		~Cspaceport_storeroom();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_storeroom); }
	};
}

using namespace n_spaceport_storeroom;

#endif
