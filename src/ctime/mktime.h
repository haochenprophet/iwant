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
	};
}

using namespace n_mktime;

#endif
