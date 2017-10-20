#ifndef MINSS_H
#define MINSS_H

#include "object.h"

namespace n_MINSS {
	class CMINSS :public Object
	{
	public:
		CMINSS();
		~CMINSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MINSS;

#endif
