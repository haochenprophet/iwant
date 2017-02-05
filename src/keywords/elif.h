#ifndef ELIF_H
#define ELIF_H

#include "../object.h"

namespace n_elif {
	class Celif :public Object
	{
	public:
		Celif();
		int my_init(void *p=nullptr);
	};
}

using namespace n_elif;

#endif
