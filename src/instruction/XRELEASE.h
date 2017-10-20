#ifndef XRELEASE_H
#define XRELEASE_H

#include "object.h"

namespace n_XRELEASE {
	class CXRELEASE :public Object
	{
	public:
		CXRELEASE();
		~CXRELEASE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XRELEASE;

#endif
