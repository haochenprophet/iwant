#ifndef SPACEPORT_COMMUNICATION_H
#define SPACEPORT_COMMUNICATION_H

#include "../object.h"

namespace n_spaceport_communication {
	class Cspaceport_communication :public Object
	{
	public:
		Cspaceport_communication();
		~Cspaceport_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_communication); }
	};
}

using namespace n_spaceport_communication;

#endif
