#ifndef FADD_H
#define FADD_H

#include "object/object.h"

namespace n_FADD {
	class CFADD :public Object
	{
	public:
		CFADD();
		~CFADD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FADD;

#endif
