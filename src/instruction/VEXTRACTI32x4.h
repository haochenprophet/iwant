#ifndef VEXTRACTI32X4_H
#define VEXTRACTI32X4_H

#include "../object.h"

namespace n_VEXTRACTI32x4 {
	class CVEXTRACTI32x4 :public Object
	{
	public:
		CVEXTRACTI32x4();
		~CVEXTRACTI32x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXTRACTI32x4;

#endif
