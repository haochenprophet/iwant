#ifndef VPROLD_H
#define VPROLD_H

#include "object/object.h"

namespace n_VPROLD {
	class CVPROLD :public Object
	{
	public:
		CVPROLD();
		~CVPROLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPROLD;

#endif
