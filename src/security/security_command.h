#ifndef SECURITY_COMMAND_H
#define SECURITY_COMMAND_H

#include "../object.h"

namespace n_security_command {
	class Csecurity_command :public Object
	{
	public:
		Csecurity_command();
		~Csecurity_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_command); }
	};
}

using namespace n_security_command;

#endif
