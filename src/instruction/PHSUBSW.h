#ifndef PHSUBSW_H
#define PHSUBSW_H

#include "object.h"

namespace n_PHSUBSW {
	class CPHSUBSW :public Object
	{
	public:
		CPHSUBSW();
		~CPHSUBSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHSUBSW;

#endif
