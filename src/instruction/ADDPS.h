#ifndef ADDPS_H
#define ADDPS_H

#include "object.h"

namespace n_ADDPS {
	class CADDPS :public Object
	{
	public:
		CADDPS();
		~CADDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADDPS;

#endif
