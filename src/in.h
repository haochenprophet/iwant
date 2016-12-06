#ifndef IN_H
#define IN_H

#include "object.h"

namespace n_in {
	class Cin :public Object
	{
	public:
		Cin();
		int my_init(void *p=NULL);
	};
}

using namespace n_in;

#endif
