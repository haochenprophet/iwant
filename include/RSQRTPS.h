#ifndef RSQRTPS_H
#define RSQRTPS_H

#include "../object.h"

namespace n_RSQRTPS {
	class CRSQRTPS :public Object
	{
	public:
		CRSQRTPS();
		~CRSQRTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RSQRTPS;

#endif
