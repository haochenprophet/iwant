#ifndef __GC_H
#define __GC_H

#include "object/object.h"

namespace n___gc {
	class C__gc :public Object
	{
	public:
		C__gc();
		int my_init(void *p=nullptr);
	};
}

using namespace n___gc;

#endif
