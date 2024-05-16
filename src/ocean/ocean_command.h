#ifndef OCEAN_COMMAND_H
#define OCEAN_COMMAND_H

#include "object/object.h"

namespace n_ocean_command {
	class Cocean_command :public Object
	{
	public:
		Cocean_command();
		~Cocean_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_command); }
	};
}

using namespace n_ocean_command;

#endif
