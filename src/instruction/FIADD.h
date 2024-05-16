#ifndef FIADD_H
#define FIADD_H

#include "object/object.h"

namespace n_FIADD {
	class CFIADD :public Object
	{
	public:
		CFIADD();
		~CFIADD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FIADD;

#endif
