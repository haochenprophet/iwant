#ifndef STRCPY_H
#define STRCPY_H

#include "object/object.h"

namespace n_strcpy {
	class Cstrcpy :public Object
	{
	public:
		Cstrcpy();
		~Cstrcpy();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strcpy;

#endif
