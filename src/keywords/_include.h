#ifndef _INCLUDE_H
#define _INCLUDE_H

#include "object/object.h"

namespace n__include {
	class C_include :public Object
	{
	public:
		C_include();
		int my_init(void *p=nullptr);
	};
}

using namespace n__include;

#endif
