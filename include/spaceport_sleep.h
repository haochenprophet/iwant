#ifndef SPACEPORT_SLEEP_H
#define SPACEPORT_SLEEP_H

#include "../object.h"

namespace n_spaceport_sleep {
	class Cspaceport_sleep :public Object
	{
	public:
		Cspaceport_sleep();
		~Cspaceport_sleep();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_sleep); }
	};
}

using namespace n_spaceport_sleep;

#endif
