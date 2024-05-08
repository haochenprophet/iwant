#ifndef __UNALIGNED_H
#define __UNALIGNED_H

#include "../object.h"

namespace n___unaligned {
	class C__unaligned :public Object
	{
	public:
		C__unaligned();
		int my_init(void *p=nullptr);
	};
}

using namespace n___unaligned;

#endif
