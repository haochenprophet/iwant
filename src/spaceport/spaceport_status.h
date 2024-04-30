#ifndef SPACEPORT_STATUS_H
#define SPACEPORT_STATUS_H

#include "../object.h"

namespace n_spaceport_status {
	class Cspaceport_status :public Object
	{
	public:
		Cspaceport_status();
		~Cspaceport_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_status); }
	};
}

using namespace n_spaceport_status;

#endif
