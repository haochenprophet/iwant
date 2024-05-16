#ifndef DIVSS_H
#define DIVSS_H

#include "object/object.h"

namespace n_DIVSS {
	class CDIVSS :public Object
	{
	public:
		CDIVSS();
		~CDIVSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DIVSS;

#endif
