#ifndef STRPBRK_H
#define STRPBRK_H

#include "object/object.h"

namespace n_strpbrk {
	class Cstrpbrk :public Object
	{
	public:
		Cstrpbrk();
		~Cstrpbrk();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strpbrk;

#endif
