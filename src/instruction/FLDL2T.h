#ifndef FLDL2T_H
#define FLDL2T_H

#include "object.h"

namespace n_FLDL2T {
	class CFLDL2T :public Object
	{
	public:
		CFLDL2T();
		~CFLDL2T();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDL2T;

#endif
