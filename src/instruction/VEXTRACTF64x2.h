#ifndef VEXTRACTF64X2_H
#define VEXTRACTF64X2_H

#include "object/object.h"

namespace n_VEXTRACTF64x2 {
	class CVEXTRACTF64x2 :public Object
	{
	public:
		CVEXTRACTF64x2();
		~CVEXTRACTF64x2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTF64x2;

#endif
