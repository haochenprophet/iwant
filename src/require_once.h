#ifndef REQUIRE_ONCE_H
#define REQUIRE_ONCE_H

#include "object.h"

namespace n_require_once {
	class Crequire_once :public Object
	{
	public:
		Crequire_once();
		int my_init(void *p=nullptr);
	};
}

using namespace n_require_once;

#endif
