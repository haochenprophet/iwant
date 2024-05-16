#ifndef CVTSD2SS_H
#define CVTSD2SS_H

#include "object/object.h"

namespace n_CVTSD2SS {
	class CCVTSD2SS :public Object
	{
	public:
		CCVTSD2SS();
		~CCVTSD2SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTSD2SS;

#endif
