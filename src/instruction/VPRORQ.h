#ifndef VPRORQ_H
#define VPRORQ_H

#include "object.h"

namespace n_VPRORQ {
	class CVPRORQ :public Object
	{
	public:
		CVPRORQ();
		~CVPRORQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPRORQ;

#endif
