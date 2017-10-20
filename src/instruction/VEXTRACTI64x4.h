#ifndef VEXTRACTI64X4_H
#define VEXTRACTI64X4_H

#include "object.h"

namespace n_VEXTRACTI64x4 {
	class CVEXTRACTI64x4 :public Object
	{
	public:
		CVEXTRACTI64x4();
		~CVEXTRACTI64x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTI64x4;

#endif
