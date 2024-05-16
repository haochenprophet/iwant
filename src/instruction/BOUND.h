#ifndef BOUND_H
#define BOUND_H

#include "object/object.h"

namespace n_BOUND {
	class CBOUND :public Object
	{
	public:
		CBOUND();
		~CBOUND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BOUND;

#endif
