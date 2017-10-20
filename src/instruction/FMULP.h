#ifndef FMULP_H
#define FMULP_H

#include "object.h"

namespace n_FMULP {
	class CFMULP :public Object
	{
	public:
		CFMULP();
		~CFMULP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FMULP;

#endif
