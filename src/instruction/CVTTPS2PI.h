#ifndef CVTTPS2PI_H
#define CVTTPS2PI_H

#include "object.h"

namespace n_CVTTPS2PI {
	class CCVTTPS2PI :public Object
	{
	public:
		CCVTTPS2PI();
		~CCVTTPS2PI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTTPS2PI;

#endif
