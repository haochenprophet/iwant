#ifndef VMOVDQU8_H
#define VMOVDQU8_H

#include "object.h"

namespace n_VMOVDQU8 {
	class CVMOVDQU8 :public Object
	{
	public:
		CVMOVDQU8();
		~CVMOVDQU8();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMOVDQU8;

#endif
