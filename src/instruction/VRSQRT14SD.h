#ifndef VRSQRT14SD_H
#define VRSQRT14SD_H

#include "object/object.h"

namespace n_VRSQRT14SD {
	class CVRSQRT14SD :public Object
	{
	public:
		CVRSQRT14SD();
		~CVRSQRT14SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT14SD;

#endif
