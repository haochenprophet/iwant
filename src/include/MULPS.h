#ifndef MULPS_H
#define MULPS_H

#include "../object.h"

namespace n_MULPS {
	class CMULPS :public Object
	{
	public:
		CMULPS();
		~CMULPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MULPS;

#endif
