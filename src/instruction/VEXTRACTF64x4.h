#ifndef VEXTRACTF64X4_H
#define VEXTRACTF64X4_H

#include "object.h"

namespace n_VEXTRACTF64x4 {
	class CVEXTRACTF64x4 :public Object
	{
	public:
		CVEXTRACTF64x4();
		~CVEXTRACTF64x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTF64x4;

#endif
