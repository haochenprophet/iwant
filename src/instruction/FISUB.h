#ifndef FISUB_H
#define FISUB_H

#include "object.h"

namespace n_FISUB {
	class CFISUB :public Object
	{
	public:
		CFISUB();
		~CFISUB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FISUB;

#endif
