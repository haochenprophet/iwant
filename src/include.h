#ifndef INCLUDE_H
#define INCLUDE_H

#include "object.h"

namespace n_include {
	class Cinclude :public Object
	{
	public:
		Cinclude();
		int my_init(void *p=NULL);
	};
}

using namespace n_include;

#endif
