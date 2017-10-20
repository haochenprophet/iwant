#ifndef VMOVDQU64_H
#define VMOVDQU64_H

#include "object.h"

namespace n_VMOVDQU64 {
	class CVMOVDQU64 :public Object
	{
	public:
		CVMOVDQU64();
		~CVMOVDQU64();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMOVDQU64;

#endif
