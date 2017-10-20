#ifndef VPROLQ_H
#define VPROLQ_H

#include "object.h"

namespace n_VPROLQ {
	class CVPROLQ :public Object
	{
	public:
		CVPROLQ();
		~CVPROLQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPROLQ;

#endif
