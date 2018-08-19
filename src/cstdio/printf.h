#ifndef PRINTF_H
#define PRINTF_H

#include "../object.h"

namespace n_printf {
	class Cprintf :public Object
	{
	public:
		Cprintf();
		~Cprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_printf;

#endif
