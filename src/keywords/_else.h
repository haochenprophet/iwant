#ifndef _ELSE_H
#define _ELSE_H

#include "../object.h"

namespace n__else {
	class C_else :public Object
	{
	public:
		C_else();
		int my_init(void *p=nullptr);
	};
}

using namespace n__else;

#endif
