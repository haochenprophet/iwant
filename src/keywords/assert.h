#ifndef ASSERT_H
#define ASSERT_H

#include "object/object.h"

namespace n_assert {
	class Cassert :public Object
	{
	public:
		Cassert();
		int my_init(void *p=nullptr);
	};
}

using namespace n_assert;

#endif
