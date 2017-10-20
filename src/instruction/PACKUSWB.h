#ifndef PACKUSWB_H
#define PACKUSWB_H

#include "object.h"

namespace n_PACKUSWB {
	class CPACKUSWB :public Object
	{
	public:
		CPACKUSWB();
		~CPACKUSWB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PACKUSWB;

#endif
