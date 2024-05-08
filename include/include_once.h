#ifndef INCLUDE_ONCE_H
#define INCLUDE_ONCE_H

#include "../object.h"

namespace n_include_once {
	class Cinclude_once :public Object
	{
	public:
		Cinclude_once();
		int my_init(void *p=nullptr);
	};
}

using namespace n_include_once;

#endif
