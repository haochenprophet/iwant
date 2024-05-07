#ifndef SPACEPORT_MANAGE_H
#define SPACEPORT_MANAGE_H

#include "../object.h"

namespace n_spaceport_manage {
	class Cspaceport_manage :public Object
	{
	public:
		Cspaceport_manage();
		~Cspaceport_manage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_manage); }
	};
}

using namespace n_spaceport_manage;

#endif
