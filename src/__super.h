#ifndef __SUPER_H
#define __SUPER_H

#include "object.h"

namespace n___super {
	class C__super :public Object
	{
	public:
		C__super();
		int my_init(void *p=NULL);
	};
}

using namespace n___super;

#endif
