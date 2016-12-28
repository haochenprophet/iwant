#ifndef LONG_H
#define LONG_H

#include "object.h"

namespace n_long {
	class Clong :public Object
	{
	public:
		Clong();
		int my_init(void *p=nullptr);
	};
}

using namespace n_long;

#endif
