#ifndef CMPS_H
#define CMPS_H

#include "../object.h"

namespace n_CMPS {
	class CCMPS :public Object
	{
	public:
		CCMPS();
		~CCMPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPS;

#endif
