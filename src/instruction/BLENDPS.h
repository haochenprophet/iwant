#ifndef BLENDPS_H
#define BLENDPS_H

#include "object.h"

namespace n_BLENDPS {
	class CBLENDPS :public Object
	{
	public:
		CBLENDPS();
		~CBLENDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLENDPS;

#endif
