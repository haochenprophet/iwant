#ifndef INT_H
#define INT_H

#include "object.h"

namespace n_int {
	class Cint :public Object
	{
	public:
		Cint();
		int my_init(void *p=NULL);
	};
}

using namespace n_int;

#endif
