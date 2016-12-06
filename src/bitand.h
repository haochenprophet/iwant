#ifndef BITAND_H
#define BITAND_H

#include "object.h"

namespace n_bitand {
	class Cbitand :public Object
	{
	public:
		Cbitand();
		int my_init(void *p=NULL);
	};
}

using namespace n_bitand;

#endif
