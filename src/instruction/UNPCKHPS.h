#ifndef UNPCKHPS_H
#define UNPCKHPS_H

#include "object.h"

namespace n_UNPCKHPS {
	class CUNPCKHPS :public Object
	{
	public:
		CUNPCKHPS();
		~CUNPCKHPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UNPCKHPS;

#endif
