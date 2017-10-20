#ifndef FSIN_H
#define FSIN_H

#include "object.h"

namespace n_FSIN {
	class CFSIN :public Object
	{
	public:
		CFSIN();
		~CFSIN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSIN;

#endif
