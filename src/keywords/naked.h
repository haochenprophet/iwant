#ifndef NAKED_H
#define NAKED_H

#include "object/object.h"

namespace n_naked {
	class Cnaked :public Object
	{
	public:
		Cnaked();
		int my_init(void *p=nullptr);
	};
}

using namespace n_naked;

#endif
