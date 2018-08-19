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
	};
}

using namespace n_putc;

#endif
