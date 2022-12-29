#ifndef STRTOL_H
#define STRTOL_H

#include "../object.h"

namespace n_strtol {
	class Cstrtol :public Object
	{
	public:
		Cstrtol();
		~Cstrtol();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtol); }
		static long int strtol_c(const char* str, char** endptr, int base);

	};
}

using namespace n_strtol;

#endif
