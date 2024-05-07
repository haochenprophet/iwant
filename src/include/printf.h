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
		size_t my_size() { return sizeof(Cprintf); }
		static int printf_c(const char* format, ...);

	};
}

using namespace n_printf;

#endif
