#ifndef REGISTER_H
#define REGISTER_H

#include "../object.h"

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
