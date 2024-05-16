#ifndef POR_H
#define POR_H

#include "object/object.h"

namespace n_POR {
	class CPOR :public Object
	{
	public:
		CPOR();
		~CPOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POR;

#endif
