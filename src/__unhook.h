#ifndef __UNHOOK_H
#define __UNHOOK_H

#include "object.h"

namespace n___unhook {
	class C__unhook :public Object
	{
	public:
		C__unhook();
		int my_init(void *p=nullptr);
	};
}

using namespace n___unhook;

#endif
