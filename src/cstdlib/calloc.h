#ifndef CALLOC_H
#define CALLOC_H

#include "../object.h"

namespace n_calloc {
	class Ccalloc :public Object
	{
	public:
		Ccalloc();
		~Ccalloc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_calloc;

#endif
