#ifndef __TRAIT___H
#define __TRAIT___H

#include "object/object.h"

namespace n___TRAIT__ {
	class C__TRAIT__ :public Object
	{
	public:
		C__TRAIT__();
		int my_init(void *p=nullptr);
	};
}

using namespace n___TRAIT__;

#endif
