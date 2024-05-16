#ifndef LEAVE_H
#define LEAVE_H

#include "object/object.h"

namespace n_LEAVE {
	class CLEAVE :public Object
	{
	public:
		CLEAVE();
		~CLEAVE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LEAVE;

#endif
