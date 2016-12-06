#ifndef FOREACH_H
#define FOREACH_H

#include "object.h"

namespace n_foreach {
	class Cforeach :public Object
	{
	public:
		Cforeach();
		int my_init(void *p=NULL);
	};
}

using namespace n_foreach;

#endif
