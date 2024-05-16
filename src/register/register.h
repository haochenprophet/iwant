#ifndef REGISTER_H
#define REGISTER_H

#include "object/object.h"

namespace n_register {
	class Cregister :public Object
	{
	public:
		Cregister();
		~Cregister();
		int my_init(void *p=nullptr);
	};
}

using namespace n_register;

#endif
