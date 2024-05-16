#ifndef BLOCK_H
#define BLOCK_H

#include "object/object.h"

namespace n_block {
	class Cblock :public Object
	{
	public:
		Cblock();
		int my_init(void *p=nullptr);
	};
}

using namespace n_block;

#endif
