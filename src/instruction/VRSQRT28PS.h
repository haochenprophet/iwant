#ifndef VRSQRT28PS_H
#define VRSQRT28PS_H

#include "object.h"

namespace n_VRSQRT28PS {
	class CVRSQRT28PS :public Object
	{
	public:
		CVRSQRT28PS();
		~CVRSQRT28PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT28PS;

#endif
