#ifndef SYNCHRONIZED_H
#define SYNCHRONIZED_H

#include "object.h"

namespace n_synchronized {
	class Csynchronized :public Object
	{
	public:
		Csynchronized();
		int my_init(void *p=nullptr);
	};
}

using namespace n_synchronized;

#endif
