#ifndef VMOVDQA32_H
#define VMOVDQA32_H

#include "../object.h"

namespace n_VMOVDQA32 {
	class CVMOVDQA32 :public Object
	{
	public:
		CVMOVDQA32();
		~CVMOVDQA32();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMOVDQA32;

#endif
