#ifndef PACKUSDW_H
#define PACKUSDW_H

#include "object/object.h"

namespace n_PACKUSDW {
	class CPACKUSDW :public Object
	{
	public:
		CPACKUSDW();
		~CPACKUSDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PACKUSDW;

#endif
