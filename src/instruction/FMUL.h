#ifndef FMUL_H
#define FMUL_H

#include "object.h"

namespace n_FMUL {
	class CFMUL :public Object
	{
	public:
		CFMUL();
		~CFMUL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FMUL;

#endif
