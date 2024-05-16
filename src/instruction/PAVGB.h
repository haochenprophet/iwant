#ifndef PAVGB_H
#define PAVGB_H

#include "object/object.h"

namespace n_PAVGB {
	class CPAVGB :public Object
	{
	public:
		CPAVGB();
		~CPAVGB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PAVGB;

#endif
