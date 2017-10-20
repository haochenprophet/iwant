#ifndef PMULHW_H
#define PMULHW_H

#include "object.h"

namespace n_PMULHW {
	class CPMULHW :public Object
	{
	public:
		CPMULHW();
		~CPMULHW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULHW;

#endif
