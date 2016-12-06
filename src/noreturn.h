#ifndef NORETURN_H
#define NORETURN_H

#include "object.h"

namespace n_noreturn {
	class Cnoreturn :public Object
	{
	public:
		Cnoreturn();
		int my_init(void *p=NULL);
	};
}

using namespace n_noreturn;

#endif
