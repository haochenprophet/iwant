#ifndef XACQUIRE_H
#define XACQUIRE_H

#include "object.h"

namespace n_XACQUIRE {
	class CXACQUIRE :public Object
	{
	public:
		CXACQUIRE();
		~CXACQUIRE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XACQUIRE;

#endif
