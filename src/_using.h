#ifndef _USING_H
#define _USING_H

#include "object.h"

namespace n__using {
	class C_using :public Object
	{
	public:
		C_using();
		int my_init(void *p=nullptr);
	};
}

using namespace n__using;

#endif
