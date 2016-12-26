#ifndef __SEALED_H
#define __SEALED_H

#include "object.h"

namespace n___sealed {
	class C__sealed :public Object
	{
	public:
		C__sealed();
		int my_init(void *p=nullptr);
	};
}

using namespace n___sealed;

#endif
