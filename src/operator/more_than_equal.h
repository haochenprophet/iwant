#ifndef MORE_THAN_EQUAL_H
#define MORE_THAN_EQUAL_H

#include "../operator.h"

namespace n_more_than_equal {
	class Cmore_than_equal :public Coperator
	{
	public:
		Cmore_than_equal();
		~Cmore_than_equal();
		int my_init(void *p=nullptr);
	};
}

using namespace n_more_than_equal;

#endif
