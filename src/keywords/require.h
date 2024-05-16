#ifndef REQUIRE_H
#define REQUIRE_H

#include "object/object.h"

namespace n_require {
	class Crequire :public Object
	{
	public:
		Crequire();
		int my_init(void *p=nullptr);
	};
}

using namespace n_require;

#endif
