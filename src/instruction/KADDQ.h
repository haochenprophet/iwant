#ifndef KADDQ_H
#define KADDQ_H

#include "object.h"

namespace n_KADDQ {
	class CKADDQ :public Object
	{
	public:
		CKADDQ();
		~CKADDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KADDQ;

#endif
