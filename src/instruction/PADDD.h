#ifndef PADDD_H
#define PADDD_H

#include "object.h"

namespace n_PADDD {
	class CPADDD :public Object
	{
	public:
		CPADDD();
		~CPADDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDD;

#endif
