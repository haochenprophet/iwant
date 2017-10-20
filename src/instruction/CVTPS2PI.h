#ifndef CVTPS2PI_H
#define CVTPS2PI_H

#include "object.h"

namespace n_CVTPS2PI {
	class CCVTPS2PI :public Object
	{
	public:
		CCVTPS2PI();
		~CCVTPS2PI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPS2PI;

#endif
