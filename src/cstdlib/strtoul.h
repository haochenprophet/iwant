#ifndef STRTOUL_H
#define STRTOUL_H

#include "object/object.h"

namespace n_strtoul {
	class Cstrtoul :public Object
	{
	public:
		Cstrtoul();
		~Cstrtoul();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtoul); }
		static unsigned long int strtoul_c(const char* str, char** endptr, int base);

	};
}

using namespace n_strtoul;

#endif
