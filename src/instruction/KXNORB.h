#ifndef KXNORB_H
#define KXNORB_H

#include "object.h"

namespace n_KXNORB {
	class CKXNORB :public Object
	{
	public:
		CKXNORB();
		~CKXNORB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXNORB;

#endif
