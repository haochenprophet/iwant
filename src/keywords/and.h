#ifndef AND_H
#define AND_H

#include "object/object.h"

namespace n_and {
	class Cand :public Object
	{
	public:
		Cand();
		int my_init(void *p=nullptr);
	};
}

using namespace n_and;

#endif
