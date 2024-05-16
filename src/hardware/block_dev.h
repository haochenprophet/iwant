#ifndef BLOCK_DEV_H
#define BLOCK_DEV_H

#include "object/object.h"

namespace n_block_dev {
	class Cblock_dev :public Object
	{
	public:
		Cblock_dev();
		~Cblock_dev();
		int my_init(void *p=nullptr);
	};
}

using namespace n_block_dev;

#endif
