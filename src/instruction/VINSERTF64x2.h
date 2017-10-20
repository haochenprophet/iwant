#ifndef VINSERTF64X2_H
#define VINSERTF64X2_H

#include "object.h"

namespace n_VINSERTF64x2 {
	class CVINSERTF64x2 :public Object
	{
	public:
		CVINSERTF64x2();
		~CVINSERTF64x2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTF64x2;

#endif
