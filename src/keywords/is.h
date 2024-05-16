#ifndef IS_H
#define IS_H

#include "object/object.h"

namespace n_is {
	class Cis :public Object
	{
	public:
		Cis();
		int my_init(void *p=nullptr);
	};
}

using namespace n_is;

#endif
