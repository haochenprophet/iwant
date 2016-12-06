#ifndef NAKED_H
#define NAKED_H

#include "object.h"

namespace n_naked {
	class Cnaked :public Object
	{
	public:
		Cnaked();
		int my_init(void *p=NULL);
	};
}

using namespace n_naked;

#endif
