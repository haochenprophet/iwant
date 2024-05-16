#ifndef CVTSI2SS_H
#define CVTSI2SS_H

#include "object/object.h"

namespace n_CVTSI2SS {
	class CCVTSI2SS :public Object
	{
	public:
		CCVTSI2SS();
		~CCVTSI2SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTSI2SS;

#endif
