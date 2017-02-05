#ifndef EXTENDS_H
#define EXTENDS_H

#include "../object.h"

namespace n_extends {
	class Cextends :public Object
	{
	public:
		Cextends();
		int my_init(void *p=nullptr);
	};
}

using namespace n_extends;

#endif
