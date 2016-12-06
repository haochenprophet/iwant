#ifndef SEALED_H
#define SEALED_H

#include "object.h"

namespace n_sealed {
	class Csealed :public Object
	{
	public:
		Csealed();
		int my_init(void *p=NULL);
	};
}

using namespace n_sealed;

#endif
