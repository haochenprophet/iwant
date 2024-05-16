#ifndef __MULTIPLE_INHERITANCE_H
#define __MULTIPLE_INHERITANCE_H

#include "object/object.h"

namespace n___multiple_inheritance {
	class C__multiple_inheritance :public Object
	{
	public:
		C__multiple_inheritance();
		int my_init(void *p=nullptr);
	};
}

using namespace n___multiple_inheritance;

#endif
