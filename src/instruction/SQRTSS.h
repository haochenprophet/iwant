#ifndef SQRTSS_H
#define SQRTSS_H

#include "object.h"

namespace n_SQRTSS {
	class CSQRTSS :public Object
	{
	public:
		CSQRTSS();
		~CSQRTSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SQRTSS;

#endif
