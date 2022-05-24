#ifndef DEBUG_H
#define DEBUG_H

#include "object.h"

namespace n_debug {
	class Cdebug :public Object
	{
	public:
		Cdebug();
		~Cdebug();
		int my_init(void *p=nullptr);
	};
}

using namespace n_debug;

#endif
