#ifndef VPBLENDMQ_H
#define VPBLENDMQ_H

#include "object.h"

namespace n_VPBLENDMQ {
	class CVPBLENDMQ :public Object
	{
	public:
		CVPBLENDMQ();
		~CVPBLENDMQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBLENDMQ;

#endif
