#ifndef __NAMESPACE___H
#define __NAMESPACE___H

#include "object/object.h"

namespace n___NAMESPACE__ {
	class C__NAMESPACE__ :public Object
	{
	public:
		C__NAMESPACE__();
		int my_init(void *p=nullptr);
	};
}

using namespace n___NAMESPACE__;

#endif
