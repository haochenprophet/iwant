#ifndef SAFECAST_H
#define SAFECAST_H

#include "object.h"

namespace n_safecast {
	class Csafecast :public Object
	{
	public:
		Csafecast();
		int my_init(void *p=NULL);
	};
}

using namespace n_safecast;

#endif
