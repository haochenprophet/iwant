#ifndef DEPRECATED_H
#define DEPRECATED_H

#include "object/object.h"

namespace n_deprecated {
	class Cdeprecated :public Object
	{
	public:
		Cdeprecated();
		int my_init(void *p=nullptr);
	};
}

using namespace n_deprecated;

#endif
