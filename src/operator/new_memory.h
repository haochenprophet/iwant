#ifndef NEW_MEMORY_H
#define NEW_MEMORY_H

#include "operator.h"

namespace n_new_memory {
	class Cnew_memory :public Coperator
	{
	public:
		Cnew_memory();
		~Cnew_memory();
		int my_init(void *p=nullptr);
	};
}

using namespace n_new_memory;

#endif
