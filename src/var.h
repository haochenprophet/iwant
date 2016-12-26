#ifndef VAR_H
#define VAR_H

#include "object.h"

namespace n_var {
	class Cvar :public Object
	{
	public:
		Cvar();
		int my_init(void *p=nullptr);
	};
}

using namespace n_var;

#endif
