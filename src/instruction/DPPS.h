#ifndef DPPS_H
#define DPPS_H

#include "object/object.h"

namespace n_DPPS {
	class CDPPS :public Object
	{
	public:
		CDPPS();
		~CDPPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DPPS;

#endif
