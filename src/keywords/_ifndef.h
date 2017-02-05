#ifndef _IFNDEF_H
#define _IFNDEF_H

#include "../object.h"

namespace n__ifndef {
	class C_ifndef :public Object
	{
	public:
		C_ifndef();
		int my_init(void *p=nullptr);
	};
}

using namespace n__ifndef;

#endif
