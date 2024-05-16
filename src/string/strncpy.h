#ifndef STRNCPY_H
#define STRNCPY_H

#include "object/object.h"

namespace n_strncpy {
	class Cstrncpy :public Object
	{
	public:
		Cstrncpy();
		~Cstrncpy();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strncpy;

#endif
