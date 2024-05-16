#ifndef STDOUT_H
#define STDOUT_H

#include "object/object.h"

namespace n_stdout {
	class Cstdout :public Object
	{
	public:
		Cstdout();
		~Cstdout();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cstdout); }
	};
}

using namespace n_stdout;

#endif
