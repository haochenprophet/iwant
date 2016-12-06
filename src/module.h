#ifndef MODULE_H
#define MODULE_H

#include "object.h"

namespace n_module {
	class Cmodule :public Object
	{
	public:
		Cmodule();
		int my_init(void *p=NULL);
	};
}

using namespace n_module;

#endif
