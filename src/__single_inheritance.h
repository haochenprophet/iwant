#ifndef __SINGLE_INHERITANCE_H
#define __SINGLE_INHERITANCE_H

#include "object.h"

namespace n___single_inheritance {
	class C__single_inheritance :public Object
	{
	public:
		C__single_inheritance();
		int my_init(void *p=NULL);
	};
}

using namespace n___single_inheritance;

#endif
