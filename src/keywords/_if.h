#ifndef _IF_H
#define _IF_H

#include "object/object.h"

namespace n__if {
	class C_if :public Object
	{
	public:
		C_if();
		int my_init(void *p=nullptr);
	};
}

using namespace n__if;

#endif
