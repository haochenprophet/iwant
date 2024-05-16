#ifndef _ELIF_H
#define _ELIF_H

#include "object/object.h"

namespace n__elif {
	class C_elif :public Object
	{
	public:
		C_elif();
		int my_init(void *p=nullptr);
	};
}

using namespace n__elif;

#endif
