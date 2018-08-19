#ifndef PUTS_H
#define PUTS_H

#include "../object.h"

namespace n_puts {
	class Cputs :public Object
	{
	public:
		Cputs();
		~Cputs();
		int my_init(void *p=nullptr);
	};
}

using namespace n_puts;

#endif
