#ifndef THIS_H
#define THIS_H

#include "object.h"

namespace n_this {
	class Cthis :public Object
	{
	public:
		Cthis();
		int my_init(void *p=nullptr);
	};
}

using namespace n_this;

#endif
