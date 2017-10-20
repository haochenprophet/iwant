#ifndef RDSEED_H
#define RDSEED_H

#include "object.h"

namespace n_RDSEED {
	class CRDSEED :public Object
	{
	public:
		CRDSEED();
		~CRDSEED();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDSEED;

#endif
