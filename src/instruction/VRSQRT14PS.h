#ifndef VRSQRT14PS_H
#define VRSQRT14PS_H

#include "object/object.h"

namespace n_VRSQRT14PS {
	class CVRSQRT14PS :public Object
	{
	public:
		CVRSQRT14PS();
		~CVRSQRT14PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT14PS;

#endif
