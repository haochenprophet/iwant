#ifndef __M128I_H
#define __M128I_H

#include "object.h"

namespace n___m128i {
	class C__m128i :public Object
	{
	public:
		C__m128i();
		int my_init(void *p=NULL);
	};
}

using namespace n___m128i;

#endif
