#ifndef END_H
#define END_H

#include "object.h"

namespace n_end {
	class Cend :public Object
	{
	public:
		Cend();
		int my_init(void *p=nullptr);
	};
}

using namespace n_end;

#endif
