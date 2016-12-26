#ifndef INITONLY_H
#define INITONLY_H

#include "object.h"

namespace n_initonly {
	class Cinitonly :public Object
	{
	public:
		Cinitonly();
		int my_init(void *p=nullptr);
	};
}

using namespace n_initonly;

#endif
