#ifndef WHILE_H
#define WHILE_H

#include "object.h"

namespace n_while {
	class Cwhile :public Object
	{
	public:
		Cwhile();
		int my_init(void *p=nullptr);
	};
}

using namespace n_while;

#endif
