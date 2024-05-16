#ifndef KXNORQ_H
#define KXNORQ_H

#include "object/object.h"

namespace n_KXNORQ {
	class CKXNORQ :public Object
	{
	public:
		CKXNORQ();
		~CKXNORQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXNORQ;

#endif
