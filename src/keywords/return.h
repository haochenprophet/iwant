#ifndef RETURN_H
#define RETURN_H

#include "object/object.h"

namespace n_return {
	class Creturn :public Object
	{
	public:
		Creturn();
		int my_init(void *p=nullptr);
	};
}

using namespace n_return;

#endif
