#ifndef IN_H
#define IN_H

#include "object/object.h"

namespace n_IN {
	class CIN :public Object
	{
	public:
		CIN();
		~CIN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_IN;

#endif
