#ifndef XTEST_H
#define XTEST_H

#include "../object.h"

namespace n_XTEST {
	class CXTEST :public Object
	{
	public:
		CXTEST();
		~CXTEST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XTEST;

#endif
