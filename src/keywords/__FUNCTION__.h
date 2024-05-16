#ifndef __FUNCTION___H
#define __FUNCTION___H

#include "object/object.h"

namespace n___FUNCTION__ {
	class C__FUNCTION__ :public Object
	{
	public:
		C__FUNCTION__();
		int my_init(void *p=nullptr);
	};
}

using namespace n___FUNCTION__;

#endif
