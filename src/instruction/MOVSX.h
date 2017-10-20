#ifndef MOVSX_H
#define MOVSX_H

#include "object.h"

namespace n_MOVSX {
	class CMOVSX :public Object
	{
	public:
		CMOVSX();
		~CMOVSX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSX;

#endif
