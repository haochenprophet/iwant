#ifndef VEXTRACTF32X4_H
#define VEXTRACTF32X4_H

#include "object.h"

namespace n_VEXTRACTF32x4 {
	class CVEXTRACTF32x4 :public Object
	{
	public:
		CVEXTRACTF32x4();
		~CVEXTRACTF32x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTF32x4;

#endif
