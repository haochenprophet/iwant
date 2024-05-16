#ifndef PAVGW_H
#define PAVGW_H

#include "object/object.h"

namespace n_PAVGW {
	class CPAVGW :public Object
	{
	public:
		CPAVGW();
		~CPAVGW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PAVGW;

#endif
