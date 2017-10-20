#ifndef RCPPS_H
#define RCPPS_H

#include "object.h"

namespace n_RCPPS {
	class CRCPPS :public Object
	{
	public:
		CRCPPS();
		~CRCPPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RCPPS;

#endif
