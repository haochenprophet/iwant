#ifndef VEXTRACTI32X8_H
#define VEXTRACTI32X8_H

#include "object.h"

namespace n_VEXTRACTI32x8 {
	class CVEXTRACTI32x8 :public Object
	{
	public:
		CVEXTRACTI32x8();
		~CVEXTRACTI32x8();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTI32x8;

#endif
