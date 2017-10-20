#ifndef AESIMC_H
#define AESIMC_H

#include "object.h"

namespace n_AESIMC {
	class CAESIMC :public Object
	{
	public:
		CAESIMC();
		~CAESIMC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AESIMC;

#endif
