#ifndef PTEST_H
#define PTEST_H

#include "../object.h"

namespace n_PTEST {
	class CPTEST :public Object
	{
	public:
		CPTEST();
		~CPTEST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PTEST;

#endif
