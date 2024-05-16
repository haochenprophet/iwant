#ifndef PUTS_H
#define PUTS_H

#include "object/object.h"

namespace n_puts {
	class Cputs :public Object
	{
	public:
		Cputs();
		~Cputs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cputs); }
		static int puts_c(const char* str);

	};
}

using namespace n_puts;

#endif
