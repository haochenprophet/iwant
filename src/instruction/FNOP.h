#ifndef FNOP_H
#define FNOP_H

#include "object/object.h"

namespace n_FNOP {
	class CFNOP :public Object
	{
	public:
		CFNOP();
		~CFNOP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNOP;

#endif
