#ifndef SUPER_H
#define SUPER_H

#include "object.h"

namespace n_super {
	class Csuper :public Object
	{
	public:
		Csuper();
		int my_init(void *p=NULL);
	};
}

using namespace n_super;

#endif
