#ifndef HOME_COMMAND_H
#define HOME_COMMAND_H

#include "../object.h"

namespace n_home_command {
	class Chome_command :public Object
	{
	public:
		Chome_command();
		~Chome_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_command); }
	};
}

using namespace n_home_command;

#endif
