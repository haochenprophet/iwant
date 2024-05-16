#ifndef __M128D_H
#define __M128D_H

#include "object/object.h"

namespace n___m128d {
	class C__m128d :public Object
	{
	public:
		C__m128d();
		int my_init(void *p=nullptr);
	};
}

using namespace n___m128d;

#endif
