#ifndef KXORQ_H
#define KXORQ_H

#include "object.h"

namespace n_KXORQ {
	class CKXORQ :public Object
	{
	public:
		CKXORQ();
		~CKXORQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXORQ;

#endif
