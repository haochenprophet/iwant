#ifndef __TRY__FINALLY_H
#define __TRY__FINALLY_H

#include "object.h"

namespace n___try__finally {
	class C__try__finally :public Object
	{
	public:
		C__try__finally();
		int my_init(void *p=NULL);
	};
}

using namespace n___try__finally;

#endif
