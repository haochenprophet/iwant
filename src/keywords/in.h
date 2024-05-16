#ifndef IN_H
#define IN_H

#include "object/object.h"

namespace n_in {
	class Cin :public Object
	{
	public:
		Cin();
		int my_init(void *p=nullptr);
	};
}

using namespace n_in;

#endif
