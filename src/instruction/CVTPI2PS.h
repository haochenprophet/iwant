#ifndef CVTPI2PS_H
#define CVTPI2PS_H

#include "object.h"

namespace n_CVTPI2PS {
	class CCVTPI2PS :public Object
	{
	public:
		CCVTPI2PS();
		~CCVTPI2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPI2PS;

#endif
