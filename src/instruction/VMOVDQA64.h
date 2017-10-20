#ifndef VMOVDQA64_H
#define VMOVDQA64_H

#include "object.h"

namespace n_VMOVDQA64 {
	class CVMOVDQA64 :public Object
	{
	public:
		CVMOVDQA64();
		~CVMOVDQA64();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMOVDQA64;

#endif
