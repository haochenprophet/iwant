#ifndef STRTOD_H
#define STRTOD_H

#include "../object.h"

namespace n_strtod {
	class Cstrtod :public Object
	{
	public:
		Cstrtod();
		~Cstrtod();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtod); }
		static double strtod_c(const char* str, char** endptr);

	};
}

using namespace n_strtod;

#endif
