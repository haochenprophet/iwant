#ifndef REGISTER_H
#define REGISTER_H

#include "object.h"

namespace n_register {
	class Cregister :public Object
	{
	public:
		Cregister();
		int my_init(void *p=NULL);
	};
}

using namespace n_register;

#endif
