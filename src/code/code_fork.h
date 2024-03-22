#ifndef CODE_FORK_H
#define CODE_FORK_H

#include "../object.h"

namespace n_code_fork {
	class Ccode_fork :public Object
	{
	public:
		Ccode_fork();
		~Ccode_fork();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_fork); }
	};
}

using namespace n_code_fork;

#endif
