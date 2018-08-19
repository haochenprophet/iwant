#ifndef GETENV_H
#define GETENV_H

#include "../object.h"

namespace n_getenv {
	class Cgetenv :public Object
	{
	public:
		Cgetenv();
		~Cgetenv();
		int my_init(void *p=nullptr);
	};
}

using namespace n_getenv;

#endif
