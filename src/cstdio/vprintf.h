#ifndef VPRINTF_H
#define VPRINTF_H

#include "object/object.h"

namespace n_vprintf {
	class Cvprintf :public Object
	{
	public:
		Cvprintf();
		~Cvprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvprintf); }
		static int vprintf_c(const char* format, va_list arg);

	};
}

using namespace n_vprintf;

#endif
