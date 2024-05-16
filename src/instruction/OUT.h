#ifndef OUT_H
#define OUT_H

#include "object/object.h"

namespace n_OUT {
	class COUT :public Object
	{
	public:
		COUT();
		~COUT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_OUT;

#endif
