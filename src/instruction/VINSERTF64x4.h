#ifndef VINSERTF64X4_H
#define VINSERTF64X4_H

#include "object/object.h"

namespace n_VINSERTF64x4 {
	class CVINSERTF64x4 :public Object
	{
	public:
		CVINSERTF64x4();
		~CVINSERTF64x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTF64x4;

#endif
