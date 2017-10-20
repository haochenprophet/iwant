#ifndef VSHUFF32X4_H
#define VSHUFF32X4_H

#include "object.h"

namespace n_VSHUFF32x4 {
	class CVSHUFF32x4 :public Object
	{
	public:
		CVSHUFF32x4();
		~CVSHUFF32x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSHUFF32x4;

#endif
