#ifndef SQRTPS_H
#define SQRTPS_H

#include "../object.h"

namespace n_SQRTPS {
	class CSQRTPS :public Object
	{
	public:
		CSQRTPS();
		~CSQRTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SQRTPS;

#endif
