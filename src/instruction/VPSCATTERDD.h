#ifndef VPSCATTERDD_H
#define VPSCATTERDD_H

#include "object/object.h"

namespace n_VPSCATTERDD {
	class CVPSCATTERDD :public Object
	{
	public:
		CVPSCATTERDD();
		~CVPSCATTERDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSCATTERDD;

#endif
