#ifndef VRSQRT28PD_H
#define VRSQRT28PD_H

#include "../object.h"

namespace n_VRSQRT28PD {
	class CVRSQRT28PD :public Object
	{
	public:
		CVRSQRT28PD();
		~CVRSQRT28PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT28PD;

#endif
