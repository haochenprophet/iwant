#ifndef STATIC_ASSERT_H
#define STATIC_ASSERT_H

#include "object/object.h"

namespace n_static_assert {
	class Cstatic_assert :public Object
	{
	public:
		Cstatic_assert();
		int my_init(void *p=nullptr);
	};
}

using namespace n_static_assert;

#endif
