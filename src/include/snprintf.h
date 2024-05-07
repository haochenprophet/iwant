#ifndef SNPRINTF_H
#define SNPRINTF_H

#include "../object.h"

namespace n_snprintf {
	class Csnprintf :public Object
	{
	public:
		Csnprintf();
		~Csnprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csnprintf); }
		static int snprintf_c(char* s, size_t n, const char* format, ...);
	};
}

using namespace n_snprintf;

#endif
