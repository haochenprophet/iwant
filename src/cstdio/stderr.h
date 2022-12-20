#ifndef STDERR_H
#define STDERR_H

#include "../object.h"

namespace n_stderr {
	class Cstderr :public Object
	{
	public:
		Cstderr();
		~Cstderr();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cstderr); }
	};
}

using namespace n_stderr;

#endif
