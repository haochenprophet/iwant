#ifndef _REGISTER_H
#define _REGISTER_H

#include "object/object.h"

namespace n__register {
	class C_register :public Object
	{
	public:
		C_register();
		int my_init(void *p=nullptr);
	};
}

using namespace n__register;

#endif
