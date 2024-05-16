#ifndef PMULHRSW_H
#define PMULHRSW_H

#include "object/object.h"

namespace n_PMULHRSW {
	class CPMULHRSW :public Object
	{
	public:
		CPMULHRSW();
		~CPMULHRSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULHRSW;

#endif
