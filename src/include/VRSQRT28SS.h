#ifndef VRSQRT28SS_H
#define VRSQRT28SS_H

#include "../object.h"

namespace n_VRSQRT28SS {
	class CVRSQRT28SS :public Object
	{
	public:
		CVRSQRT28SS();
		~CVRSQRT28SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT28SS;

#endif
