#ifndef COMMAND_H
#define COMMAND_H

#include "object.h"

namespace n_command {
	class Ccommand :public Object
	{
	public:
		Ccommand();
		~Ccommand();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccommand); }
	};
}

using namespace n_command;

#endif
