#ifndef CVTDQ2PS_H
#define CVTDQ2PS_H

#include "object/object.h"

namespace n_CVTDQ2PS {
	class CCVTDQ2PS :public Object
	{
	public:
		CCVTDQ2PS();
		~CCVTDQ2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTDQ2PS;

#endif
