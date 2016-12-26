#ifndef GOTO_H
#define GOTO_H

#include "object.h"

namespace n_goto {
	class Cgoto :public Object
	{
	public:
		Cgoto();
		int my_init(void *p=nullptr);
	};
}

using namespace n_goto;

#endif
