#ifndef KXORW_H
#define KXORW_H

#include "object/object.h"

namespace n_KXORW {
	class CKXORW :public Object
	{
	public:
		CKXORW();
		~CKXORW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXORW;

#endif
