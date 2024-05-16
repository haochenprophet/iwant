#ifndef VTESTPS_H
#define VTESTPS_H

#include "object/object.h"

namespace n_VTESTPS {
	class CVTESTPS :public Object
	{
	public:
		CVTESTPS();
		~CVTESTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VTESTPS;

#endif
