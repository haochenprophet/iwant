#ifndef MOVNTPS_H
#define MOVNTPS_H

#include "object/object.h"

namespace n_MOVNTPS {
	class CMOVNTPS :public Object
	{
	public:
		CMOVNTPS();
		~CMOVNTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVNTPS;

#endif
