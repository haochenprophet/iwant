#ifndef EXCEPT_H
#define EXCEPT_H

#include "../object.h"

namespace n_except {
	class Cexcept :public Object
	{
	public:
		Cexcept();
		int my_init(void *p=nullptr);
	};
}

using namespace n_except;

#endif
