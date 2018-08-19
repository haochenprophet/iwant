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
	};
}

using namespace n_realloc;

#endif
