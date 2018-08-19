#ifndef MALLOC_H
#define MALLOC_H

#include "../object.h"

namespace n_malloc {
	class Cmalloc :public Object
	{
	public:
		Cmalloc();
		~Cmalloc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_malloc;

#endif
