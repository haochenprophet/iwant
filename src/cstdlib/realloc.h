#ifndef REALLOC_H
#define REALLOC_H

#include "../object.h"

namespace n_realloc {
	class Crealloc :public Object
	{
	public:
		Crealloc();
		~Crealloc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Crealloc); }
	};
}

using namespace n_realloc;

#endif
