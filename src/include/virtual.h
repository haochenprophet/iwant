#ifndef VIRTUAL_H
#define VIRTUAL_H

#include "../object.h"

namespace n_virtual {
	class Cvirtual :public Object
	{
	public:
		Cvirtual();
		int my_init(void *p=nullptr);
	};
}

using namespace n_virtual;

#endif
