#ifndef SPACEPORT_COMMAND_H
#define SPACEPORT_COMMAND_H

#include "../object.h"

namespace n_spaceport_command {
	class Cspaceport_command :public Object
	{
	public:
		Cspaceport_command();
		~Cspaceport_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_command); }
	};
}

using namespace n_spaceport_command;

#endif
