#ifndef XADD_H
#define XADD_H

#include "object/object.h"

namespace n_XADD {
	class CXADD :public Object
	{
	public:
		CXADD();
		~CXADD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XADD;

#endif
