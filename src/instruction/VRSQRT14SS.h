#ifndef VRSQRT14SS_H
#define VRSQRT14SS_H

#include "object/object.h"

namespace n_VRSQRT14SS {
	class CVRSQRT14SS :public Object
	{
	public:
		CVRSQRT14SS();
		~CVRSQRT14SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT14SS;

#endif
