#ifndef __VIRTUAL_INHERITANCE_H
#define __VIRTUAL_INHERITANCE_H

#include "object.h"

namespace n___virtual_inheritance {
	class C__virtual_inheritance :public Object
	{
	public:
		C__virtual_inheritance();
		int my_init(void *p=NULL);
	};
}

using namespace n___virtual_inheritance;

#endif
