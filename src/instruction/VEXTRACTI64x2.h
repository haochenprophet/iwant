#ifndef VEXTRACTI64X2_H
#define VEXTRACTI64X2_H

#include "object/object.h"

namespace n_VEXTRACTI64x2 {
	class CVEXTRACTI64x2 :public Object
	{
	public:
		CVEXTRACTI64x2();
		~CVEXTRACTI64x2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTI64x2;

#endif
