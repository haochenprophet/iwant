#ifndef XOR_H
#define XOR_H

#include "object.h"

namespace n_xor {
	class Cxor :public Object
	{
	public:
		Cxor();
		int my_init(void *p=NULL);
	};
}

using namespace n_xor;

#endif
