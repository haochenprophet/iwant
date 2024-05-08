#ifndef PUTC_H
#define PUTC_H

#include "../object.h"

namespace n_putc {
	class Cputc :public Object
	{
	public:
		Cputc();
		~Cputc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cputc); }
		static int puts_c(const char* str);

	};
}

using namespace n_putc;

#endif
