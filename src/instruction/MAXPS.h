#ifndef MAXPS_H
#define MAXPS_H

#include "object.h"

namespace n_MAXPS {
	class CMAXPS :public Object
	{
	public:
		CMAXPS();
		~CMAXPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MAXPS;

#endif
