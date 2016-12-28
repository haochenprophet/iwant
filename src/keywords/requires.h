#ifndef REQUIRES_H
#define REQUIRES_H

#include "object.h"

namespace n_requires {
	class Crequires :public Object
	{
	public:
		Crequires();
		int my_init(void *p=nullptr);
	};
}

using namespace n_requires;

#endif
