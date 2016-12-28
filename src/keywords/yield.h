#ifndef YIELD_H
#define YIELD_H

#include "object.h"

namespace n_yield {
	class Cyield :public Object
	{
	public:
		Cyield();
		int my_init(void *p=nullptr);
	};
}

using namespace n_yield;

#endif
