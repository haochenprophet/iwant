#ifndef CODE_COMMAND_H
#define CODE_COMMAND_H

#include "../object.h"

namespace n_code_command {
	class Ccode_command :public Object
	{
	public:
		Ccode_command();
		~Ccode_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_command); }
	};
}

using namespace n_code_command;

#endif
