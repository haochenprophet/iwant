#ifndef __TRY__FINALLY_H
#define __TRY__FINALLY_H

#include "object/object.h"

namespace n___try__finally {
	class C__try__finally :public Object
	{
	public:
		C__try__finally();
		int my_init(void *p=nullptr);
	};
}

using namespace n___try__finally;

#endif
