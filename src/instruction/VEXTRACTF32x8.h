#ifndef VEXTRACTF32X8_H
#define VEXTRACTF32X8_H

#include "object.h"

namespace n_VEXTRACTF32x8 {
	class CVEXTRACTF32x8 :public Object
	{
	public:
		CVEXTRACTF32x8();
		~CVEXTRACTF32x8();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTF32x8;

#endif
