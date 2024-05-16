#ifndef FINALLY_H
#define FINALLY_H

#include "object/object.h"

namespace n_finally {
	class Cfinally :public Object
	{
	public:
		Cfinally();
		int my_init(void *p=nullptr);
	};
}

using namespace n_finally;

#endif
