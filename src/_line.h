#ifndef _LINE_H
#define _LINE_H

#include "object.h"

namespace n__line {
	class C_line :public Object
	{
	public:
		C_line();
		int my_init(void *p=NULL);
	};
}

using namespace n__line;

#endif
