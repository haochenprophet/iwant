#ifndef STRTOLL_H
#define STRTOLL_H

#include "../object.h"

namespace n_strtoll {
	class Cstrtoll :public Object
	{
	public:
		Cstrtoll();
		~Cstrtoll();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtoll); }
		static long long int strtoll_c(const char* str, char** endptr, int base);

	};
}

using namespace n_strtoll;

#endif
