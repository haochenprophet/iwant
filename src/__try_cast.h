#ifndef __TRY_CAST_H
#define __TRY_CAST_H

#include "object.h"

namespace n___try_cast {
	class C__try_cast :public Object
	{
	public:
		C__try_cast();
		int my_init(void *p=NULL);
	};
}

using namespace n___try_cast;

#endif
