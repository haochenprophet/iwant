#ifndef STRTOLD_H
#define STRTOLD_H

#include "object/object.h"

namespace n_strtold {
	class Cstrtold :public Object
	{
	public:
		Cstrtold();
		~Cstrtold();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtold); }
		static long double strtold_c(const char* str, char** endptr);

	};
}

using namespace n_strtold;

#endif
