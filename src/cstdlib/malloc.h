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
		size_t my_size() { return sizeof(Cmalloc); }
		static void* malloc_c(size_t size);

	};
}

using namespace n_malloc;

#endif
