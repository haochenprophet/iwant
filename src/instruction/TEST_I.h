#ifndef TEST_I_H
#define TEST_I_H

#include "object/object.h"

namespace n_TEST {
	class CTEST :public Object
	{
	public:
		CTEST();
		~CTEST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_TEST;

#endif
