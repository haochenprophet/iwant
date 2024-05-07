#ifndef VRSQRT28SD_H
#define VRSQRT28SD_H

#include "../object.h"

namespace n_VRSQRT28SD {
	class CVRSQRT28SD :public Object
	{
	public:
		CVRSQRT28SD();
		~CVRSQRT28SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRSQRT28SD;

#endif
