#ifndef _DEFINE_H
#define _DEFINE_H

#include "object.h"

namespace n__define {
	class C_define :public Object
	{
	public:
		C_define();
		int my_init(void *p=NULL);
	};
}

using namespace n__define;

#endif
