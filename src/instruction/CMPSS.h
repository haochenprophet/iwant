#ifndef CMPSS_H
#define CMPSS_H

#include "object.h"

namespace n_CMPSS {
	class CCMPSS :public Object
	{
	public:
		CCMPSS();
		~CCMPSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPSS;

#endif
