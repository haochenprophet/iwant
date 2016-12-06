#ifndef FALSE_H
#define FALSE_H

#include "object.h"

namespace n_false {
	class Cfalse :public Object
	{
	public:
		Cfalse();
		int my_init(void *p=NULL);
	};
}

using namespace n_false;

#endif
