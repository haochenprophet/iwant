#ifndef USING_H
#define USING_H

#include "object.h"

namespace n_using {
	class Cusing :public Object
	{
	public:
		Cusing();
		int my_init(void *p=NULL);
	};
}

using namespace n_using;

#endif
