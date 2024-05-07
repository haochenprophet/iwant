#ifndef TEST_H
#define TEST_H

#include "object.h"

namespace n_test {
	class Ctest :public Object
	{
	public:
		Ctest();
		~Ctest();
		int my_init(void *p=nullptr);
	};
}

using namespace n_test;

#endif
