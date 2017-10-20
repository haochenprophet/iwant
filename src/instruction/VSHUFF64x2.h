#ifndef VSHUFF64X2_H
#define VSHUFF64X2_H

#include "object.h"

namespace n_VSHUFF64x2 {
	class CVSHUFF64x2 :public Object
	{
	public:
		CVSHUFF64x2();
		~CVSHUFF64x2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSHUFF64x2;

#endif
