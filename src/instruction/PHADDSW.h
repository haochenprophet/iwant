#ifndef PHADDSW_H
#define PHADDSW_H

#include "object.h"

namespace n_PHADDSW {
	class CPHADDSW :public Object
	{
	public:
		CPHADDSW();
		~CPHADDSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHADDSW;

#endif
