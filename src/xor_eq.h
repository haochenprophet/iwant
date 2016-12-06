#ifndef XOR_EQ_H
#define XOR_EQ_H

#include "object.h"

namespace n_xor_eq {
	class Cxor_eq :public Object
	{
	public:
		Cxor_eq();
		int my_init(void *p=NULL);
	};
}

using namespace n_xor_eq;

#endif
