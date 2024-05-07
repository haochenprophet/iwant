#ifndef ASCTIME_H
#define ASCTIME_H

#include "../object.h"

namespace n_asctime {
	class Casctime :public Object
	{
	public:
		Casctime();
		~Casctime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Casctime); }
		static char* asctime_c(const struct tm* timeptr);

	};
}

using namespace n_asctime;

#endif
