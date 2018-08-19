#ifndef PUTCHAR_H
#define PUTCHAR_H

#include "../object.h"

namespace n_putchar {
	class Cputchar :public Object
	{
	public:
		Cputchar();
		~Cputchar();
		int my_init(void *p=nullptr);
	};
}

using namespace n_putchar;

#endif
