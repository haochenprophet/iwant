#ifndef ROCKET_COMMAND_H
#define ROCKET_COMMAND_H

#include "../object.h"

namespace n_rocket_command {
	class Crocket_command :public Object
	{
	public:
		Crocket_command();
		~Crocket_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_command); }
	};
}

using namespace n_rocket_command;

#endif
