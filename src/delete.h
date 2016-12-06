#ifndef DELETE_H
#define DELETE_H

#include "object.h"

namespace n_delete {
	class Cdelete :public Object
	{
	public:
		Cdelete();
		int my_init(void *p=NULL);
	};
}

using namespace n_delete;

#endif
