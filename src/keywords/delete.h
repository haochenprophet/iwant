#ifndef DELETE_H
#define DELETE_H

#include "object/object.h"

namespace n_delete {
	class Cdelete :public Object
	{
	public:
		Cdelete();
		int my_init(void *p=nullptr);
	};
}

using namespace n_delete;

#endif
