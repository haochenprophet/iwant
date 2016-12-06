#ifndef REQUIRE_H
#define REQUIRE_H

#include "object.h"

namespace n_require {
	class Crequire :public Object
	{
	public:
		Crequire();
		int my_init(void *p=NULL);
	};
}

using namespace n_require;

#endif
