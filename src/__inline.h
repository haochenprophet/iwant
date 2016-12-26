#ifndef __INLINE_H
#define __INLINE_H

#include "object.h"

namespace n___inline {
	class C__inline :public Object
	{
	public:
		C__inline();
		int my_init(void *p=nullptr);
	};
}

using namespace n___inline;

#endif
