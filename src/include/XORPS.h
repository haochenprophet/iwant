#ifndef XORPS_H
#define XORPS_H

#include "../object.h"

namespace n_XORPS {
	class CXORPS :public Object
	{
	public:
		CXORPS();
		~CXORPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XORPS;

#endif
