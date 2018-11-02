#ifndef DELETE_MEMORY_H
#define DELETE_MEMORY_H

#include "../operator.h"

namespace n_delete_memory {
	class Cdelete_memory :public Coperator
	{
	public:
		Cdelete_memory();
		~Cdelete_memory();
		int my_init(void *p=nullptr);
	};
}

using namespace n_delete_memory;

#endif
