#ifndef PUTCHAR_H
#define PUTCHAR_H

#include "object/object.h"

namespace n_putchar {
	class Cputchar :public Object
	{
	public:
		Cputchar();
		~Cputchar();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cputchar); }
		static int putchar_c(int character);

	};
}

using namespace n_putchar;

#endif
