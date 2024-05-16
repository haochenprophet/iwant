#ifndef NEW_NOINLINE_H
#define NEW_NOINLINE_H

#include "object/object.h"

namespace n_new_noinline {
	class Cnew_noinline :public Object
	{
	public:
		Cnew_noinline();
		int my_init(void *p=nullptr);
	};
}

using namespace n_new_noinline;

#endif
