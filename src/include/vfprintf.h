#ifndef VFPRINTF_H
#define VFPRINTF_H

#include "../object.h"

namespace n_vfprintf {
	class Cvfprintf :public Object
	{
	public:
		Cvfprintf();
		~Cvfprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvfprintf); }
		static int vfprintf_c(FILE* stream, const char* format, va_list arg);

	};
}

using namespace n_vfprintf;

#endif
