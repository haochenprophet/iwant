#ifndef BREAK_H
#define BREAK_H

#include "object.h"

namespace n_break {
	class Cbreak :public Object
	{
	public:
		Cbreak();
		int my_init(void *p=nullptr);
	};
}

using namespace n_break;

#endif
