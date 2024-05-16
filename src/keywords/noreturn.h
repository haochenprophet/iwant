#ifndef NORETURN_H
#define NORETURN_H

#include "object/object.h"

namespace n_noreturn {
	class Cnoreturn :public Object
	{
	public:
		Cnoreturn();
		int my_init(void *p=nullptr);
	};
}

using namespace n_noreturn;

#endif
