#ifndef NONE_H
#define NONE_H

#include "../object.h"

namespace n_none {
	class Cnone :public Object
	{
	public:
		Cnone();
		int my_init(void *p=nullptr);
	};
}

using namespace n_none;

#endif
