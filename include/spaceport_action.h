#ifndef SPACEPORT_ACTION_H
#define SPACEPORT_ACTION_H

#include "../object.h"

namespace n_spaceport_action {
	class Cspaceport_action :public Object
	{
	public:
		Cspaceport_action();
		~Cspaceport_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_action); }
	};
}

using namespace n_spaceport_action;

#endif
