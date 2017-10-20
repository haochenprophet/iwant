#ifndef KXNORW_H
#define KXNORW_H

#include "object.h"

namespace n_KXNORW {
	class CKXNORW :public Object
	{
	public:
		CKXNORW();
		~CKXNORW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXNORW;

#endif
