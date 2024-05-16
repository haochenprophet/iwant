#ifndef VRSQRT14PD_H
#define VRSQRT14PD_H

#include "object/object.h"

namespace n_VRSQRT14PD {
	class CVRSQRT14PD :public Object
	{
	public:
		CVRSQRT14PD();
		~CVRSQRT14PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT14PD;

#endif
