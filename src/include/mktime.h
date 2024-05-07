#ifndef MKTIME_H
#define MKTIME_H

#include "../object.h"

namespace n_mktime {
	class Cmktime :public Object
	{
	public:
		Cmktime();
		~Cmktime();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmktime); }
		static time_t mktime_c(struct tm* timeptr);
	};
}

using namespace n_mktime;

#endif
