#ifndef THIS_H
#define THIS_H

#include "object.h"

namespace n_this {
	class Cthis :public Object
	{
	public:
		Cthis();
		int my_init(void *p=NULL);
	};
}

using namespace n_this;

#endif
