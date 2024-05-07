#ifndef VMOVDQU32_H
#define VMOVDQU32_H

#include "../object.h"

namespace n_VMOVDQU32 {
	class CVMOVDQU32 :public Object
	{
	public:
		CVMOVDQU32();
		~CVMOVDQU32();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMOVDQU32;

#endif
