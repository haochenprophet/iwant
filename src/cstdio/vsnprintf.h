#ifndef VSNPRINTF_H
#define VSNPRINTF_H

#include "object/object.h"

namespace n_vsnprintf {
	class Cvsnprintf :public Object
	{
	public:
		Cvsnprintf();
		~Cvsnprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvsnprintf); }
		static int vsnprintf_c(char* s, size_t n, const char* format, va_list arg);

	};
}

using namespace n_vsnprintf;

#endif
