#ifndef _IF_H
#define _IF_H

#include "object.h"

namespace n__if {
	class C_if :public Object
	{
	public:
		C_if();
		int my_init(void *p=NULL);
	};
}

using namespace n__if;

#endif
