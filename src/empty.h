#ifndef EMPTY_H
#define EMPTY_H

#include "object.h"

namespace n_empty {
	class Cempty :public Object
	{
	public:
		Cempty();
		int my_init(void *p=NULL);
	};
}

using namespace n_empty;

#endif
